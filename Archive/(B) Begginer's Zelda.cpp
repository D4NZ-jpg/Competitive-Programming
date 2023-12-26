// Problem: B. Begginer's Zelda
// Contest: Codeforces - Codeforces Round 915 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1905/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-12-2023 08:39:43
// Duration: 0:42:16
// End: 2023-12-16 09:21:59
// Rating: 1100
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;

		vector<vector<ll>> g(n + 1);

		for (int i = 1; i < n; i++) {
			ll u, v;
			cin >> u >> v;

			g[u].pb(v);
			g[v].pb(u);
		}

		ll ans = 0;
		for (auto& i : g)
			if (i.size() == 1) ans++;

		cout << (ans + 1) / 2 << endl;
	}

	return 0;
}
