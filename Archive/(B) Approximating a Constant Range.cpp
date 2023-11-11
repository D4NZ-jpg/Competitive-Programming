// Problem: B. Approximating a Constant Range
// Contest: Codeforces - Codeforces Round #333 (Div. 2)
// URL: https://codeforces.com/problemset/problem/602/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 05-01-2023 14:13:55
// Duration: 0:40:03
// End: 2023-01-05 14:53:58
// Rating: 1400
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int nums[n];
	for (int i = 0; i < n; i++) cin >> nums[i];

	if (n == 2) {
		cout << 2;
		return 0;
	}

	int iMax = 0;
	int l = 0, r = -1;
	int a = -1, b = -1;
	int lpa, lpb;

	while (r < n - 1) {
		r++;
		if (a == -1) a = nums[r];
		if (b == -1 && a != nums[r]) b = nums[r];
		if (nums[r] == a) lpa = r;
		if (nums[r] == b) lpb = r;
		if (a == -1 || b == -1) continue;
		if (nums[r] != a && nums[r] != b) {
			bool ca = abs(b - nums[r]) == 1;
			if (ca) {
				l   = lpa + 1;
				a   = nums[r];
				lpa = r;
			} else {
				l   = lpb + 1;
				b   = nums[r];
				lpb = r;
			}
		};

		iMax = max(iMax, r - l + 1);
	}
	cout << max(iMax, r - l + 1);
	return 0;
}