// Problem: C. Array Game
// Contest: Codeforces - Codeforces Round 914 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1904/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 09-12-2023 11:20:43
// Duration: 0:43:04
// End: 2023-12-09 12:03:47
// Rating: 1400
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

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

	int tc;
	cin >> tc;
	while (tc--) {
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;
		if (k >= 3) {
			cout << 0 << endl;
			continue;
		}

		sort(all(v));
		ll mindiff = LONG_LONG_MAX, mine = v[0];
		for (int i = 1; i < n; i++)
			mindiff = min(mindiff, v[i] - v[i - 1]);

		if (k == 1) {
			cout << min(mindiff, mine) << endl;
			continue;
		}

		ll ans = min(mindiff, mine);

		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++) {
				auto x = lower_bound(all(v), v[j] - v[i]);
				if (*x == v[j] - v[i]) {
					ans = 0;
					continue;
				}

				ans = min(ans, min(*x - (v[j] - v[i]),
				                   abs(*(x - 1) - (v[j] - v[i]))));
			}

		cout << ans << endl;
	}
	return 0;
}
