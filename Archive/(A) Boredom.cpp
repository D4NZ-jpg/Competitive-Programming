// Problem: A. Boredom
// Contest: Codeforces - Codeforces Round 260 (Div. 1)
// URL: https://codeforces.com/problemset/problem/455/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 23-10-2023 18:19:11
// Duration: 0:48:04
// End: 2023-10-23 19:07:15
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
int64_t dp[1000000];
int64_t solve(int64_t x, vector<int64_t>& cnt) {
	if (!x) return 0;
	if (x == 1) return cnt[1];
	if (dp[x] != -1) return dp[x];
	return dp[x] =
	         max(solve(x - 1, cnt), solve(x - 2, cnt) + cnt[x] * x);
}
int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 1000000; i++) dp[i] = -1;

	int n;
	cin >> n;
	vector<int64_t> v(1000000);
	int             maxi = 0;
	for (int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		v[ai]++;
		maxi = max(maxi, ai);
	}

	cout << solve(maxi, v);

	return 0;
}
