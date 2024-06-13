// Problem: C. Perfect Square
// Contest: Codeforces - Codeforces Round 903 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1881/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-03-2024 19:29:45
// Duration: 0:32:07
// End: 2024-03-18 20:01:52
// Rating: 1200
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

ll solve() {
	ll n;
	cin >> n;
	char g[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> g[i][j];

	ll ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			char c[4] = {g[i][j], g[n - j - 1][i],
			             g[n - i - 1][n - j - 1], g[j][n - i - 1]};

			char maxC = 0;
			for (int i = 0; i < 4; i++) maxC = max(maxC, c[i]);
			for (int i = 0; i < 4; i++) ans += abs(c[i] - maxC);
			g[i][j] = g[n - j - 1][i] = g[n - i - 1][n - j - 1] =
			  g[j][n - i - 1]         = maxC;
		}

	return ans;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
