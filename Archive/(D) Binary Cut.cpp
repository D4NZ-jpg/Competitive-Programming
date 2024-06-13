// Problem: D. Binary Cut
// Contest: Codeforces - Codeforces Round 944 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1971/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 16-05-2024 17:05:11
// Duration: 0:16:50
// End: 2024-05-16 17:22:01
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
		string s;
		cin >> s;

		ll   ans = 1;
		bool x   = false;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] != s[i - 1]) ans++;
			if (s[i] == '1' && s[i - 1] == '0') x = true;
		}

		cout << ans - x << endl;
	}

	return 0;
}
