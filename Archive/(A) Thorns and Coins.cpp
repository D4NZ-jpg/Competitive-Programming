// Problem: A. Thorns and Coins
// Contest: Codeforces - Codeforces Round 927 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1932/A
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Start: 18-02-2024 23:06:56
// Duration: 0:02:09
// End: 2024-02-18 23:09:05
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
		ll     n;
		string s;
		cin >> n >> s;
		ll ans = s[0] == '@';

		for (int i = 1; i < n; i++) {
			if (s[i] == '@') ans++;
			else if (s[i - 1] == '*' && s[i] == '*')
				break;
		}

		cout << ans << endl;
	}

	return 0;
}
