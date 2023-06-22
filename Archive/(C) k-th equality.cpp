// Problem: C. k-th equality
// Contest: Codeforces - Codeforces Round 880 (Div. 2)
// URL: https://codeforces.com/contest/1836/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-06-2023 20:46:09
// End: 19-06-2023 20:01:56
// Duration: 23:15:47
// Rating: 1700

#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int      a, b, c;
		uint64_t k;

		cin >> a >> b >> c >> k;

		uint64_t aMin = pow(10, a - 1), aMax = pow(10, a);
		bool     out = false;

		for (int i = aMin; i < aMax; i++) {
			int64_t bMin = max((int64_t)pow(10, c - 1) - i,
			                   (int64_t)pow(10, b - 1));

			int64_t bMax = min((int64_t)pow(10, c) - 1 - i,
			                   (int64_t)pow(10, b) - 1);

			if (bMax < bMin) continue;

			uint64_t nums = bMax - bMin + 1;
			if (k <= nums) {
				out = true;
				cout << i << " + " << bMin - 1 + k << " = "
				     << i + bMin - 1 + k << '\n';
				break;
			}
			k -= nums;
			// cout << i << ' ' << bMin << ' ' << bMax << endl;
		}

		if (!out) cout << "-1\n";
	}

	return 0;
}