// Problem: B. Collecting Game
// Contest: Codeforces - Codeforces Round 914 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1904/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 09-12-2023 11:15:18
// Duration: 0:04:51
// End: 2023-12-09 11:20:09
// Rating: 1100
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
		ll n;
		cin >> n;
		vector<pll> v(n);
		vector<ll>  dp(n), prefix(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i].first;
			v[i].second = i;
		}

		sort(all(v));

		prefix[0] = v[0].first;
		for (int i = 1; i < n; i++)
			prefix[i] = prefix[i - 1] + v[i].first;

		dp[n - 1] = n - 1;
		for (int i = n - 2; i >= 0; i--) {
			if (prefix[i] >= v[i + 1].first) dp[i] = dp[i + 1];
			else
				dp[i] = i;
		}

		vector<ll> ans(n);
		for (int i = 0; i < n; i++) ans[v[i].second] = dp[i];
		for (ll& i : ans) cout << i << ' ';
		cout << endl;
	}

	return 0;
}
