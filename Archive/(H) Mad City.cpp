// Problem: H. Mad City
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/H
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// Start: 15-12-2023 16:14:38
// Duration: 0:45:23
// End: 2023-12-15 17:00:01
// Rating: 1700
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

ll dis(ll& a, ll& trgt, ll& n, vector<vector<ll>>& g) {
	vector<bool> vis(n + 1);
	queue<pll>   q;
	q.push({a, 0});

	while (q.size()) {
		pll x = q.front();
		q.pop();
		ll curr = x.first, dis = x.second;

		if (vis[curr]) continue;
		vis[curr] = true;

		if (curr == trgt) return dis;

		for (ll& i : g[curr])
			if (!vis[i]) q.push({i, dis + 1});
	}

	return -1;
}

ll findLoop(ll curr, ll p, vector<vector<ll>>& g, vector<bool>& v) {
	if (v[curr]) return curr;
	v[curr] = true;
	ll ans  = -69;
	for (ll& i : g[curr]) {
		if (i == p) continue;
		if (v[i]) return curr;
		ans = max(ans, findLoop(i, curr, g, v));
	}

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
		ll n, a, b;
		cin >> n >> a >> b;
		vector<vector<ll>> g(n + 1);
		for (int i = 0; i < n; i++) {
			ll x, y;
			cin >> x >> y;
			g[x].pb(y);
			g[y].pb(x);
		}

		vector<bool> vis(n + 1);
		ll           loopEntry = findLoop(b, -1, g, vis);

		// Distance from A to entry
		ll disA = dis(a, loopEntry, n, g);

		// Distance from B to entry
		ll disB = dis(b, loopEntry, n, g);

		cerr << loopEntry << ' ' << disA << ' ' << disB << endl;
		if (disB < disA) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
