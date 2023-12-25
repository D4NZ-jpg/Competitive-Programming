// Problem: B. Erase First or Second Letter
// Contest: Codeforces - Codeforces Round 917 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1917/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 24-12-2023 08:48:17
// Duration: 0:25:40
// End: 2023-12-24 09:13:57
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
		ll n;
		cin >> n;
		string s;
		cin >> s;

		ll           ans = 0;
		vector<bool> vis(26);
		for (int i = 0; i < n; i++)
			if (!vis[s[i] - 'a']) {
				vis[s[i] - 'a'] = true;
				ans += n - i;
			}

		cout << ans << endl;
	}

	return 0;
}
