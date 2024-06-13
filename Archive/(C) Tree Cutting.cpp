// Problem: C. Tree Cutting
// Contest: Codeforces - Codeforces Round 936 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1946/C
// Memory Limit: 512 MB
// Time Limit: 3000 ms
// Start: 22-03-2024 08:55:54
// Duration: 1:35:05
// End: 2024-03-22 10:30:59
// Rating: 1600
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

pll far(ll id, ll p, vector<vector<ll>>& g) {
	pll ans = {0, id};

	for (ll& nei : g[id]) {
		if (nei != p) {
			pll curr = far(nei, id, g);
			if (++curr.first > ans.first) ans = curr;
		}
	}
	return ans;
}

bool getPath(vector<vector<ll>>& g, ll v, ll p, ll trgt,
             vector<ll>& ans) {
	if (v == trgt) {
		ans.pb(trgt);
		return true;
	}

	for (ll& nei : g[v]) {
		if (nei == p) continue;

		if (getPath(g, nei, v, trgt, ans)) {
			ans.pb(nei);
			return true;
		}
	}

	return false;
}

ll d(vector<vector<ll>>& g) {
	pll e1 = far(1, -1, g);
	pll e2 = far(e1.second, -1, g);

	vector<ll> v;
	getPath(g, e1.second, -1, e2.second, v);

	for (ll& i : v) { cerr << i << ' '; }
	cerr << endl;
	return v[e2.first / 2];
}

pll dfs(vector<vector<ll>>& g, ll v, ll p, ll trgt) {
	ll sz = 1, cuts = 0;
	for (ll& nei : g[v]) {
		if (nei == p) continue;

		pll ans = dfs(g, nei, v, trgt);
		sz += ans.first, cuts += ans.second;
	}

	if (sz >= trgt) cuts++, sz = 0;
	return {sz, cuts};
}

ll solve() {
	ll n, k;
	cin >> n >> k;

	vector<vector<ll>> g(n + 1);
	for (int i = 1; i < n; i++) {
		ll u, v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	ll center = d(g);
	ll l = 1, r = n, ans = 1;
	while (l <= r) {
		ll  mid = (l + r) / 2;
		pll x   = dfs(g, center, -1, mid);
		if (x.second >= k + 1) ans = mid, l = mid + 1;
		else
			r = mid - 1;
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
	while (tc--) cout << solve() << endl;

	return 0;
}
