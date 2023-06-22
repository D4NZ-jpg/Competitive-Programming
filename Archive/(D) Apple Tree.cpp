// Problem: D. Apple Tree
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/contest/1843/problem/D
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// Start: 20-06-2023 08:35:48
// End: 20-06-2023 10:21:26
// Duration: 1:45:38

#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

map<int, vector<int>> g;
map<int, int>         memo;

int cal(int j) {
	if (!g.count(j)) {
		memo[j] = 1;
		return 1;
	}

	int children = 0;

	for (int i = 0; i < g[j].size(); i++) {
		if (memo.count(g[j][i])) children += memo[g[j][i]];
		else
			children += cal(g[j][i]);
	}

	memo[j] = children;
	return children;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		g.clear();
		memo.clear();

		map<int, vector<int>> tmp;
		while (--n) {
			int u, v;
			cin >> u >> v;
			tmp[u].pb(v);
			tmp[v].pb(u);
		}

		// Prepare tree
		set<int>   v;
		queue<int> fila;
		fila.push(1);
		while (fila.size()) {
			int curr = fila.front();
			fila.pop();

			if (v.count(curr)) continue;
			v.insert(curr);

			for (int& i : tmp[curr]) {
				fila.push(i);
				if (!v.count(i)) g[curr].pb(i);
			}
		}

		int q;
		cin >> q;
		while (q--) {
			int64_t x, y, sX, sY;
			cin >> x >> y;

			if (memo.count(x)) sX = memo[x];
			else
				sX = cal(x);

			if (memo.count(y)) sY = memo[y];
			else
				sY = cal(y);

			cout << sX * sY << endl;
		}
	}

	return 0;
}