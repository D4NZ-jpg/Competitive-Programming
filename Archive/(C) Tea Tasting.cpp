// Problem: C. Tea Tasting
// Contest: Codeforces - Educational Codeforces Round 143 (Rated for
// Div. 2) URL: https://codeforces.com/problemset/problem/1795/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 07-11-2023 14:30:15
// Duration: 2:54:26
// End: 2023-11-07 17:24:41
// Rating: 1500
// URL: https://codeforces.com/problemset/problem/1795/C
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
		int n;
		cin >> n;
		vector<ll> a(n), b(n), complete(n + 1), remaining(n + 1),
		  sum(n);

		for (ll& i : a) cin >> i;
		for (ll& i : b) cin >> i;

		sum[0] = b[0];
		for (int i = 1; i < n; i++) sum[i] = sum[i - 1] + b[i];

		for (int i = 0; i < n; i++) {
			// returns v.end()??
			ll max_idx =
			  upper_bound(all(sum), a[i] + (i ? sum[i - 1] : 0))
			  - sum.begin() - 1;

			ll left;
			if (max_idx >= 0) {
				left = a[i]
				       - (sum[max(max_idx, 0ll)]
				          - (i && max_idx >= 0 ? sum[i - 1] : 0));

				complete[max_idx + 1]--, complete[i]++;
			} else
				left = a[0];

			remaining[max_idx + 1] += left;
		}
		for (int i = 1; i < n; i++) complete[i] += complete[i - 1];
		for (int i = 0; i < n; i++)
			cout << b[i] * complete[i] + remaining[i] << ' ';
		cout << endl;
	}

	return 0;
}
