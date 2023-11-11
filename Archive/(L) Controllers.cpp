// Problem: L. Controllers
// Contest: Codeforces - SWERC 2022-2023 - Online Mirror (Unrated,
// ICPC Rules, Teams Preferred) URL: https://codeforces.com/problemset/problem/1776/L Memory Limit: 256
// MB Time Limit: 2000 ms Start: 07-11-2023 17:26:45
// Duration: None
// End: 2023-11-07 18:38:06
// Rating: 1500
// URL: https://codeforces.com/problemset/problem/1776/L
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

ll formula(ll k, ll a, ll b, ll x, ll y) {
	return b * (y - x) / (a - b) + k;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll     n, q, x = 0, y = 0;
	string s;

	cin >> n >> s >> q;

	for (char& c : s)
		if (c == '+') x++;
		else
			y++;

	while (q--) {
		ll a, b;
		cin >> a >> b;

		if (a != b) {
			ll k = max(0ll, (x * b - y * b) / (a - b));
			ll i = formula(k, a, b, x, y);
			ll j = x - i, l = y - k;

			if (k >= 0 && i >= 0 && k <= y && i <= x
			    && i * a + j * b == k * a + l * b)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			/*
			cerr << "i: " << i << " j: " << j << " k: " << k
			     << " l: " << l << endl;
			     */
		} else {
			if (x == y) cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
/*
ll start = max(0ll, (x * b - y * b) / (a - b));
for (int k = start; k <= y; k++) {
    ll i = formula(k, a, b, x, y);
    ll j = x - i, l = y - k;
    cout << "i: " << i << " j: " << j << " k: " << k
         << " l: " << l << endl;
    if (i > k) break;
}
cout << "===\n";
*/
