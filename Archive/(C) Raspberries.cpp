// Problem: C. Raspberries
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 01-12-2023 20:10:31
// Duration: 0:07:23
// End: 2023-12-01 20:17:54
// Rating: 1000
#include <bits/stdc++.h>
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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for (ll& i : v) cin >> i;

		ll ans = INT_MAX, evens = 0;
		for (ll& i : v) {
			evens += !(i % 2);
			if (!(i % k)) ans = 0;
			else
				ans = min(ans, k - i % k);
		}

		if (k == 4) cout << min(max(2 - evens, 0ll), ans) << endl;
		else
			cout << ans << endl;
	}

	return 0;
}
