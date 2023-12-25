// Problem: C. Quests
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/C
// Memory Limit: 256 MB
// Time Limit: 2500 ms
// Start: 19-12-2023 16:52:56
// Duration: 0:16:52
// End: 2023-12-19 17:09:48
// Rating: None
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

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

	int tc;
	cin >> tc;
	while (tc--) {
		ll n, k;
		cin >> n >> k;

		vector<ll> a(n), b(n), dp(n, -1), pref(n);
		for (auto& i : a) cin >> i;
		for (auto& i : b) cin >> i;

		pref[0] = a[0];
		for (int i = 1; i < n; i++) pref[i] = a[i] + pref[i - 1];

		ll ans = 0, currMax = 0;

		for (int i = 0; i < n; i++) {
			ll ops = k - i;
			if (ops > 0) {
				currMax = max(b[i], currMax);
				dp[i]   = (pref[i] + (ops - 1) * currMax);
			} else
				dp[i] = 0;
		}

		cout << *max_element(all(dp)) << endl;
	}

	return 0;
}
/*
1 4 5 4 5 10
1 5 1 2 5 1

4 15 11 14

3 2 4 1 4
2 3 1 4 7


11 13 15 14 0 0
*/
