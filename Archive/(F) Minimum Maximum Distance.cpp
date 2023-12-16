// Problem: F. Minimum Maximum Distance
// Contest: Codeforces - Codeforces Round 903 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1881/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 13-12-2023 17:19:28
// Duration: 1:39:15
// End: 2023-12-13 18:58:43
// Rating: 1700
#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
using pll = pair<int, int>;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

pll traversal(int idx, int p, vector<bool>& marked,
              vector<vector<int>>& g) {
	pll ans;

	if (marked[idx]) ans = {0, idx};
	else
		ans = {INT_MIN, -1};

	for (int& i : g[idx]) {
		if (i == p) continue;
		ans = max(ans, traversal(i, idx, marked, g));
	}

	ans.first++;
	return ans;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		int k, n;
		cin >> n >> k;
		vector<bool> marked(n + 1);
		int          markedNode;
		for (int i = 0; i < k; i++) {
			int j;
			cin >> j;
			markedNode = j;
			marked[j]  = true;
		}

		vector<vector<int>> g(n + 2);
		for (int i = 0; i < n - 1; i++) {
			int a, b;
			cin >> a >> b;
			g[a].pb(b);
			g[b].pb(a);
		}

		if (k == 1) {
			cout << 0 << endl;
			continue;
		}

		pll x = traversal(markedNode, -1, marked, g);
		pll y = traversal(x.second, -1, marked, g);

		cout << y.first / 2 << endl;
	}
	return 0;
}
