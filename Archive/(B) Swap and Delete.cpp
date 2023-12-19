// Problem: B. Swap and Delete
// Contest: Codeforces - Educational Codeforces Round 160 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1913/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-12-2023 20:05:02
// Duration: 0:48:01
// End: 2023-12-18 20:53:03
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

ll solve(string& s, ll& o, ll& z) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') o--;
		else
			z--;
		if (z < 0 || o < 0) return s.size() - i;
	}
	return 0;
}

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

		ll ones = 0, zeros = 0;
		for (char& c : s)
			if (c == '0') zeros++;
			else
				ones++;

		cout << solve(s, ones, zeros) << endl;
	}

	return 0;
}
/*
* 111100
* 11100
* 00111
*
* 0011
* 111100
*
* 111100
* 0011
*/
