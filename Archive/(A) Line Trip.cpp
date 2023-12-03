// Problem: A. Line Trip
// Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1901/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-12-2023 22:23:31
// Duration: 0:06:04
// End: 2023-12-02 22:29:35
// Rating: 800
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
		ll n, x;
		cin >> n >> x;
		vector<ll> v(n + 2);
		for (int i = 1; i <= n; i++) cin >> v[i];
		v[0] = 0, v[n + 1] = v[n] + 2 * (x - v[n]);

		ll ans = 0;
		for (int i = 1; i <= n + 1; i++)
			ans = max(ans, v[i] - v[i - 1]);

		cout << ans << endl;
	}

	return 0;
}
