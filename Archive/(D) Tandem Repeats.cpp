// Problem: D. Tandem Repeats?
// Contest: Codeforces - Educational Codeforces Round 163 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1948/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-03-2024 09:30:32
// Duration: 0:52:22
// End: 2024-03-15 10:22:54
// Rating: 1700
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
	string s;
	cin >> s;

	ll ans = 0, n = s.size();
	for (int i = 1; i < n; i++) {
		vector<bool> v(n);

		for (int j = 0; j + i < n; j++)
			v[j] =
			  (s[j] == s[j + i]) || (s[j] == '?' || s[j + i] == '?');

		ll curr = v[0], currBest = v[0];
		for (int j = 1; j < n; j++) {
			if (v[j]) curr++;
			else
				curr = 0;
			currBest = max(currBest, curr);
		}
		if (currBest >= i) ans = 2 * i;
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
