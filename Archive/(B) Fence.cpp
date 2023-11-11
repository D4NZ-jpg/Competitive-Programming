// Problem: B. Fence
// Contest: Codeforces - Codeforces Round 211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-03-2023 17:13:29
// Duration: 0:17:01
// End: 2023-03-18 17:30:30
// Rating: 1100
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
	int n, k;
	cin >> n >> k;

	int fence[n];
	for (int i = 0; i < n; i++) cin >> fence[i];

	int out = 0, low = 0, sum = 0;
	for (int i = 0; i < k; i++) sum += fence[i];
	low = sum;
	for (int i = 1; i < n - k + 1; i++) {
		sum -= fence[i - 1];
		sum += fence[i + k - 1];

		if (sum < low) {
			out = i;
			low = sum;
		}
	}
	cout << out + 1;
	return 0;
}