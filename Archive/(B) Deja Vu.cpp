// Problem: B. Deja Vu
// Contest: Codeforces - Codeforces Round 907 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1891/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-12-2023 22:23:30
// Duration: 0:32:08
// End: 2023-12-15 22:55:38
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
		ll n, q;
		cin >> n >> q;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		vector<bool> vis(50);
		while (q--) {
			ll x;
			cin >> x;
			if (vis[x]) continue;
			vis[x] = true;

			for (ll& i : v) {
				if (i % (1 << x)) continue;
				i += 1 << (x - 1);
			}
		}

		for (ll& i : v) cout << i << ' ';
		cout << endl;
	}

	return 0;
}
