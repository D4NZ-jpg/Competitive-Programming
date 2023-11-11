// Problem: A. Make It Zero
// Contest: Codeforces - Codeforces Round 896 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1869/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 10-09-2023 08:06:24
// Duration: 0:23:45
// End: 2023-09-10 08:30:09
// Rating: 900
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

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

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		cout << 2 + (n % 2) * 2 << endl;
		cout << 1 << ' ' << n << endl;
		if (!(n % 2)) cout << 1 << ' ' << n << endl;
		else
			cout << 2 << ' ' << n << endl << "1 2\n1 2\n";
	}
	return 0;
}

// 1 0 9
// 1 1 9 9 0 1 8

/*
 * 0001
 * 0001
 * 0000
 *
 * 0000
 * 1001
 * 1001
 *
 * 1001
 * 1001
 * 0000
 *
 * 0000
 * 0000
 * 0000
 *
 * 0000
 * 0001
 * 0001
 *
 * 0001
 * 1000
 * 1001
 */
