// Problem: B. Comparison String
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1837/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 16-12-2023 20:23:14
// Duration: 0:07:09
// End: 2023-12-16 20:30:23
// Rating: 900
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

		ll ans = 1, curr = 1;
		for (int i = 1; i < n; i++) {
			if (s[i] == s[i - 1]) ans = max(++curr, ans);
			else
				curr = 1;
		}
		cout << ++ans << endl;
	}

	return 0;
}
