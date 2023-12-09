// Problem: C. Insert and Equalize
// Contest: Codeforces - Educational Codeforces Round 159 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1902/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 03-12-2023 09:18:15
// Duration: 0:49:50
// End: 2023-12-03 10:08:05
// Rating: 1300
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
		vector<ll> v(n), diff(n);
		for (ll& i : v) cin >> i;

		if (n == 1) {
			cout << 1 << endl;
			continue;
		}

		ll maxi = v[0];
		for (ll& i : v) maxi = max(maxi, i);
		for (int i = 0; i < n; i++) diff[i] = maxi - v[i];

		ll vgcd = diff[0];
		for (ll& i : diff) vgcd = gcd(vgcd, i);

		ll ans = 0, mex = 1;
		for (ll& i : diff) i /= vgcd, ans += i;

		sort(all(diff));
		for (ll& i : diff)
			if (i == mex) mex++;

		ans += min(mex, vgcd * n);
		cout << ans << endl;
	}
	return 0;
}
