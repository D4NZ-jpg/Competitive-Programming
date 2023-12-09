// Problem: A. Rook
// Contest: Codeforces - Codeforces Round 913 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1907/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 05-12-2023 08:45:10
// Duration: 0:03:51
// End: 2023-12-05 08:49:01
// Rating: 800
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
		char letter, num;
		cin >> letter >> num;
		ll n = num - '0';

		for (int i = 0; i < 8; i++)
			if (char('a' + i) != letter)
				cout << char('a' + i) << n << endl;

		for (int i = 0; i < 8; i++)
			if (i + 1 != n) cout << letter << i + 1 << endl;
	}

	return 0;
}
