// Problem: C. Yarik and Array
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 28-11-2023 18:21:44
// Duration: 0:22:18
// End: 2023-11-28 18:44:02
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
		for (ll& i : v) cin >> i;

		ll l = 0, r = 0, sum = 0, ans = 0;
		while (r < n) {
			if (r && (abs(v[r - 1]) % 2) == (abs(v[r]) % 2))
				sum = 0, l = r;
			sum += v[r++];

			while (sum < 0) sum -= v[l++];
			ans = max(ans, sum);
		}

		ll maxi = *max_element(all(v));
		if (maxi < 0) cout << maxi << endl;
		else
			cout << ans << endl;
	}

	return 0;
}
