// Problem: A. Binary Imbalance
// Contest: Codeforces - Educational Codeforces Round 159 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1902/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 03-12-2023 08:35:18
// Duration: 0:09:29
// End: 2023-12-03 08:44:47
// Rating: None
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	ll t;
	cin >> t;
	while (t--) {
		string s;
		ll     n;
		cin >> n >> s;

		ll z = 0, o = 0;

		for (int idx = 0; idx < n; idx++) {
			char i = s[idx];
			if (i == '0') z++;
			if (i == '1') o++;
		}

		if (z > o || (z > 0 && o > 0)) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
