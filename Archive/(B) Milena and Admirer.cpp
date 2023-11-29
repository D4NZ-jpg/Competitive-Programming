// Problem: B. Milena and Admirer
// Contest: Codeforces - Codeforces Round 910 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1898/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 25-11-2023 14:23:27
// Duration: 0:08:52
// End: 2023-11-25 14:32:19
// Rating: 1500
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
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (ll& i : v) cin >> i;

		ll ans = 0;

		for (int i = n - 2; i >= 0; i--) {
			ll div = (v[i] + v[i + 1] - 1) / v[i + 1];
			v[i] /= div;

			ans += div - 1;
		}
		cout << ans << endl;
	}
	return 0;
}
