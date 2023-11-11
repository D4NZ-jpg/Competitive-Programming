// Problem: E. The Humanoid
// Contest: Codeforces - Codeforces Round  834 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1759/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 30-10-2023 12:12:18
// Duration: 0:38:42
// End: 2023-10-30 12:51:00
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

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

	int t;
	cin >> t;
	while (t--) {
		ll n, h;
		cin >> n >> h;
		vector<ll> v(n);
		for (ll& i : v) cin >> i;
		int imax = 0;

		sort(all(v));

		for (int i = 0; i < 3; i++) {
			ll  p   = h;
			int idx = 0, boost = 3;
			while (idx < v.size()) {
				if (p > v[idx]) p += v[idx++] / 2;
				else {
					if (boost-- <= 0) break;
					p *= (boost == i ? 3 : 2);
				}
			}
			imax = max(idx, imax);
		}

		cout << imax << endl;
	}

	return 0;
}
