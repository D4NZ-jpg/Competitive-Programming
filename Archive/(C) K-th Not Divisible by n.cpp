// Problem: C. K-th Not Divisible by n
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-06-2023 21:13:23
// End: 13-06-2023 21:44:13
// Duration: 0:30:50
// Rating: 1200

#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int binSearch(int n, int k) {
	int l = 1, r = 1e9 + 2;

	while (l != r) {
		int x  = (l + r) / 2;
		int xk = x - x / n;

		if (xk == k) return x;
		if (xk < k) l = x;
		else
			r = x;
	}
	return (l + r) / 2;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		uint64_t n, k;

		cin >> n >> k;
		uint64_t x = (n * k) / (n - 1);

		for (int i = -1; i <= 1; i++) {
			int xk = (x + i) - (x + i) / n;
			if (xk == k) {
				cout << x + i << '\n';
				break;
			}
		}
	}

	return 0;
}