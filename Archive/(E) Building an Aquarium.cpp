// Problem: E. Building an Aquarium
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 05-11-2023 17:09:08
// Duration: 0:18:34
// End: 2023-11-05 17:27:42
// Rating: 1100
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

ll water(ll h, vector<ll>& v) {
	ll ans = 0;
	for (ll& i : v) ans += max(0ll, h - i);
	return ans;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		ll n, x;
		cin >> n >> x;
		vector<ll> v(n);
		for (ll& i : v) cin >> i;
		ll l = 1, r = 3000000000;
		while (l < r) {
			ll mid = (l + r + 1) / 2;
			ll h2o = water(mid, v);

			if (h2o > x) r = mid - 1;
			else
				l = mid;
		}
		cout << l << endl;
	}

	return 0;
}
