// Problem: B. Integers Shop
// Contest: Codeforces - Hello 2022
// URL: https://codeforces.com/problemset/problem/1621/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 26-10-2023 17:27:16
// Duration: 0:55:39
// End: 2023-10-26 18:22:55
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

struct segment {
	ll l, r, c;
};

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
		ll longest = 0, clong = INT_MAX;
		ll l = INT_MAX, cl = INT_MAX;
		ll r = INT_MIN, cr = INT_MAX;

		segment max_seg;
		for (ll i = 0; i < n; i++) {
			segment curr;
			cin >> curr.l >> curr.r >> curr.c;
			ll dis = curr.r - curr.l + 1;

			if (curr.l <= l) {
				if (curr.l == l) cl = min(cl, curr.c);
				else
					cl = curr.c;
				l = curr.l;
			}

			if (curr.r >= r) {
				if (curr.r == r) cr = min(cr, curr.c);
				else
					cr = curr.c;
				r = curr.r;
			}

			if (dis >= longest) {
				if (dis == longest) clong = min(clong, curr.c);
				else
					clong = curr.c;
				longest = dis;
				max_seg = curr;
			}

			if (max_seg.l == l && max_seg.r == r)
				cout << min(clong, cl + cr) << endl;

			else
				cout << cl + cr << endl;
		}
	}
	return 0;
}
