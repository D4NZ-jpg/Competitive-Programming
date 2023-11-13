// Problem: E. Block Sequence
// Contest: Codeforces - Codeforces Round 903 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1881/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 12-11-2023 21:17:36
// Duration: 0:05:34
// End: 2023-11-12 21:23:10
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

ll solve(vector<ll>& dp, vector<ll>& v, int x) {
	if (x >= v.size()) return 0;
	if (dp[x] != -1) return dp[x];

	// remove
	ll a = 1 + solve(dp, v, x + 1);

	// if can't make it the length
	if (v[x] > v.size() - 1 - x) return dp[x] = a;

	ll b = solve(dp, v, x + v[x] + 1);

	return dp[x] = min(a, b);
}

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
		vector<ll> v(n), dp(n, -1);
		for (ll& i : v) cin >> i;

		solve(dp, v, 0);
		cout << dp[0] << endl;
	}

	return 0;
}
