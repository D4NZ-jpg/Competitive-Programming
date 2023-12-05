// Problem: B. GCD Partition
// Contest: Codeforces - Codeforces Round 846 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1780/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 03-12-2023 22:20:09
// Duration: 0:03:56
// End: 2023-12-03 22:24:05
// Rating: 1100
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
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (i) v[i] += v[i - 1];
		}

		ll ans = 0;
		for (int i = 1; i < n; i++) {
			ll l = v[i - 1], r = v[n - 1] - v[i - 1];
			ans = max(ans, gcd(l, r));
		}
		cout << ans << endl;
	}
	return 0;
}
