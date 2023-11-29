// Problem: D. Jellyfish and Mex
// Contest: Codeforces - Codeforces Round 901 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1875/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-11-2023 10:00:34
// Duration: 6:48:24
// End: 2023-11-18 16:48:58
// Rating: 1600
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> dp(n + 10, INT_MAX), cnt(n + 50);

		for (ll j = 0; j < n; j++) {
			ll i;
			cin >> i;
			if (i < n) cnt[i]++;
		}

		ll idx = 0;
		while (cnt[idx]) idx++;
		dp[idx] = 0;

		for (ll i = idx; i; i--)
			for (ll j = 0; j < idx; j++) {
				ll score = dp[i] + i * (cnt[j] - 1) + j;
				dp[j]    = min(dp[j], score);
			}

		cout << dp[0] << endl;
	}

	return 0;
}
