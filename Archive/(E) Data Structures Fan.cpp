// Problem: E. Data Structures Fan
// Contest: Codeforces - Codeforces Round 895 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1872/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-10-2023 17:35:22
// Duration: 0:54:37
// End: 2023-10-18 18:29:59
// Rating: 1500
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

		string s;
		cin >> s;

		int x0 = 0, x1 = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') x0 ^= v[i];
			else
				x1 ^= v[i];

			if (i) v[i] ^= v[i - 1];
		}

		int q;
		cin >> q;
		while (q--) {
			int op, a, b;
			cin >> op >> a;
			if (op == 2)
				if (a) cout << x1 << ' ';
				else
					cout << x0 << ' ';
			else {
				cin >> b;
				a--, b--;

				int xor_ = v[b];
				if (a) xor_ ^= v[a - 1];

				x1 ^= xor_;
				x0 ^= xor_;
			}
		}

		cout << endl;
	}

	return 0;
}

/*
 * 3
 * 101
 * 011 ^
 * 110
 *
 * 110
 * 110 ^
 *
 */
