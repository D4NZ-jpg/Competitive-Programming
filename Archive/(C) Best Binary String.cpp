// Problem: C. Best Binary String
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1837/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 16-12-2023 20:36:30
// Duration: 0:08:22
// End: 2023-12-16 20:44:52
// Rating: 1000
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

		if (s[0] == '?') s[0] = '0';
		for (int i = 1; i < s.size(); i++)
			if (s[i] == '?') s[i] = s[i - 1];

		cout << s << endl;
	}

	return 0;
}
