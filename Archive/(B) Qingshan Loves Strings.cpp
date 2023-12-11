// Problem: B. Qingshan Loves Strings
// Contest: Codeforces - Codeforces Round 906 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1890/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 09-12-2023 20:32:45
// Duration: 0:18:41
// End: 2023-12-09 20:51:26
// Rating: 800
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

bool solve() {
	ll n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;

	bool isGood = true, tGood = true;
	for (int i = 1; i < n && isGood; i++) isGood = s[i] != s[i - 1];
	for (int i = 1; i < m && tGood; i++) tGood = t[i] != t[i - 1];

	if (isGood) return true;
	if (!tGood) return false;

	for (int i = 1; i < n; i++) {
		if (s[i] != s[i - 1]) continue;

		if (s[i - 1] == t[0] || s[i] == t[m - 1]) return false;
	}

	return true;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << (solve() ? "YES" : "NO") << endl;

	return 0;
}
