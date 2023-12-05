// Problem: C. Colorful Grid
// Contest: Codeforces - Codeforces Round 910 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1898/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 04-12-2023 18:26:44
// Duration: 1:57:32
// End: 2023-12-04 20:24:16
// Rating: 1700
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

void print(ll n, ll m) {
	// Horizontal
	// ===============================
	// First line
	for (int i = 0; i < m - 1; i++)
		cout << (i % 2 ? 'R' : 'B') << ' ';
	cout << endl;

	// Center
	for (int i = 1; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++)
			cout << ((n + m - 2) % 2 ? 'R' : 'B') << ' ';
		cout << endl;
	}
	// Last line
	for (int i = n - 1; i < m + n - 3; i++)
		cout << (i % 2 ? 'R' : 'B') << ' ';

	// Last char (might be different from pattern
	cout << ((n + m - 2) % 2 ? 'R' : 'B');
	cout << endl;

	// ===============================

	// Vertical
	// ===============================

	ll r = m - 1, l = 0;
	// All veritcals except last
	for (int i = 0; i < n - 1; i++) {
		// First col
		cout << (l++ % 2 ? 'R' : 'B') << ' ';

		// Mid
		for (int j = 1; j < m - 1; j++)
			cout << ((n + m - 1) % 2 ? 'R' : 'B') << ' ';

		// Last col
		cout << (r++ % 2 ? 'R' : 'B') << ' ';
		cout << endl;
	}
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll t;
	cin >> t;
	while (t--) {
		ll n, m, k;
		cin >> n >> m >> k;
		k -= n + m - 2;

		if (k < 0 || k % 2) {
			cout << "NO" << endl;
			continue;
		}

		cout << "YES" << endl;
		print(n, m);
	}
	return 0;
}
