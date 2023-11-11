// Problem: B. Astrophysicists
// Contest: Codeforces - Codeforces Round 880 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1836/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-06-2023 08:37:50
// Duration: 1:22:24
// End: 2023-06-18 10:00:14
// Rating: 1100
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int64_t solve(int64_t n, int64_t k, int64_t g) {
	int64_t out = 0, total = k * g;
	total -= ((g + 1) / 2 - 1) * n;

	if (total > 0) out = (total + g - 1) / g;

	return k * g - out * g;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int64_t n, k, g;
		cin >> n >> k >> g;
		cout << solve(n, k, g) << endl;
	}
	return 0;
}