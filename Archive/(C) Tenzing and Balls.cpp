// Problem: C. Tenzing and Balls
// Contest: Codeforces - CodeTON Round 5 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1842/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-11-2023 19:00:46
// Duration: 0:33:27
// End: 2023-11-06 19:34:13
// Rating: 1500
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
		vector<ll> v(n), dp(n), bucket(n + 1, INT_MAX);
		for (ll& i : v) cin >> i;

		dp[0] = 1, bucket[v[0]] = 0;
		for (int i = 1; i < n; i++) {
			ll color = v[i];

			dp[i] = min(dp[i - 1] + 1, bucket[color]);
			if (dp[i - 1] < bucket[color]) bucket[color] = dp[i - 1];
		}

		cout << n - dp[n - 1] << endl;
	}
	return 0;
}
