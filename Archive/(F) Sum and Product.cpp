// Problem: F. Sum and Product
// Contest: Codeforces - Codeforces Round 891 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1857/F
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// Start: 26-10-2023 13:06:57
// Duration: 3:00:22
// End: 2023-10-26 16:07:19
// Rating: 1600
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
#define ll        long long

pair<ll, ll> formula(ll a, ll b, ll c) {
	if (b * b - 4 * a * c < 0) return {-1, -2};
	ll j = sqrt(b * b - 4 * a * c);
	return {(-b + j) / (2 * a), (-b - j) / (2 * a)};
}

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
		map<ll, ll> g;
		for (ll i = 0; i < n; i++) {
			ll j;
			cin >> j;
			g[j]++;
		}

		ll q;
		cin >> q;
		while (q--) {
			ll x, y;

			// b^2-xb+y = 0
			cin >> x >> y;
			auto asd = formula(1, -x, y);
			ll   a = asd.first, b = asd.second;
			ll   n = g[a];
			if (a == b) cout << n * (n - 1) / 2 << ' ';
			else if (a + b == x && a * b == y)
				cout << n * g[b] << ' ';
			else
				cout << "0 ";
		}
		cout << endl;
	}

	return 0;
}
/*
 * a+b = x
 * a*b = y
 *
 * a=x-b
 *

 * (x-b)*b = y
 * xb-b^2 = y
 * xb-b^2-y=0
 * -b^2+xb-y=0
 *  b^2-xb+y = 0;
 */
