// Problem: B. 250 Thousand Tons of TNT
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 28-11-2023 17:52:17
// Duration: 0:29:10
// End: 2023-11-28 18:21:27
// Rating: 1100
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (ll& i : v) cin >> i;

		ll ans = 0;
		ans    = *max_element(all(v)) - *min_element(all(v));
		for (int i = 1; i < n; i++) v[i] += v[i - 1];

		for (int k = 1; k < n; k++) {
			if (n % k) continue;
			ll top = v[k - 1], less = v[k - 1];

			for (int i = k - 1; i < n; i += k) {
				ll sum = v[i];
				if (i - k >= 0) sum -= v[i - k];

				top  = max(top, sum);
				less = min(less, sum);
			}

			ans = max(abs(top - less), ans);
		}

		cout << ans << endl;
	}
	return 0;
}
