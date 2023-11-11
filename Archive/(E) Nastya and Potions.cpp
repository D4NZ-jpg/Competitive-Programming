// Problem: E. Nastya and Potions
// Contest: Codeforces - Codeforces Round 888 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1851/E
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 30-10-2023 18:30:09
// Duration: 0:16:44
// End: 2023-10-30 18:46:53
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

ll solve(int i, vector<vector<ll>>& crafts, vector<ll>& costs,
         vector<ll>& dp) {
	if (dp[i] != -1) return dp[i];

	ll sum = 0;
	for (ll& potion : crafts[i])
		sum += solve(potion, crafts, costs, dp);

	return dp[i] = min(sum, costs[i]);
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
		ll n, k;
		cin >> n >> k;
		vector<ll>         costs(n), dp(n);
		vector<vector<ll>> crafts(n);
		dp.assign(n, -1);

		for (ll& i : costs) cin >> i;
		while (k--) {
			int j;
			cin >> j;
			dp[j - 1] = 0;
		}

		for (int i = 0; i < n; i++) {
			ll m;
			cin >> m;
			if (!m && dp[i]) dp[i] = costs[i];
			else
				while (m--) {
					ll j;
					cin >> j;
					crafts[i].pb(j - 1);
				}
		}

		for (int i = 0; i < n; i++)
			cout << solve(i, crafts, costs, dp) << ' ';
		cout << endl;
	}

	return 0;
}
