// Problem: C. Diverse Matrix
// Contest: Codeforces - Codeforces Global Round 6
// URL: https://codeforces.com/problemset/problem/1266/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 10-03-2024 00:25:42
// Duration: 1:10:39
// End: 2024-03-10 01:36:21
// Rating: 1400
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

	ll r, c;
	cin >> r >> c;

	if (r == c && r == 1) {
		cout << 0 << endl;
		return 0;
	}
	if (c == 1) {
		for (int i = 2; i <= r + 1; i++) cout << i << endl;
		return 0;
	}
	if (r == 1) {
		for (int i = 2; i <= c + 1; i++) cout << i << ' ';
		return 0;
	}

	for (ll row = 1; row <= r; row++) {
		for (ll col = 1; col <= c; col++) {
			cout << row * (col + r) << ' ';
		}
		cout << endl;
	}
	return 0;
}
