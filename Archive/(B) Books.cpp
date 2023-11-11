// Problem: B. Books
// Contest: Codeforces - Codeforces Round 171 (Div. 2)
// URL: https://codeforces.com/problemset/problem/279/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 14-06-2023 12:11:17
// Duration: 0:20:44
// End: 2023-06-14 12:32:01
// Rating: 1400
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

	int n, t;
	cin >> n >> t;
	int books[n];
	for (int i = 0; i < n; i++) cin >> books[i];

	int l = 0, r = 0, out = 0, sum = 0;
	while (r < n) {
		sum += books[r++];
		if (sum > t) sum -= books[l++];
		if (sum <= t) out = max(r - l, out);
	}

	cout << out;
	return 0;
}