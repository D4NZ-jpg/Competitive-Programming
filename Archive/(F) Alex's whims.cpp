// Problem: F. Alex's whims
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 29-11-2023 00:03:50
// Duration: 0:27:36
// End: 2023-11-29 00:31:26
// Rating: 1600
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
		ll n, q;
		cin >> n >> q;
		vector<ll> a, b;
		a.reserve(500), b.reserve(500);

		for (int i = 1; i < n; i++) {
			cout << i << ' ' << i + 1 << endl;
			if (i >= 3) a.pb(i);
		}
		a.pb(n);

		while (q--) {
			ll j;
			cin >> j;
			if (a.size() == j - 1 || b.size() == j - 1) {
				cout << "-1 -1 -1" << endl;
				continue;
			}
			if (a.size() >= j - 1) {
				cout << a[j - 1] << ' ' << a[j - 2] << ' '
				     << (b.size() ? b.back() : 2) << endl;

				for (int i = j - 1; i < a.size(); i++) b.pb(a[i]);
				while (a.size() > j - 1) a.pop_back();
			} else {
				j -= a.size() + 1;
				// 2 1 4
				cout << b[b.size() - j] << ' '
				     << (b.size() - j ? b[b.size() - j - 1] : 2)
				     << ' ' << (a.size() ? a.back() : 2) << endl;

				for (int i = b.size() - j; i < b.size(); i++)
					a.pb(b[i]);
				for (int i = 0; i < j; i++) b.pop_back();
			}
		}
	}
	return 0;
}
