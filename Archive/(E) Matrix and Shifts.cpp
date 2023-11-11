// Problem: E. Matrix and Shifts
// Contest: Codeforces - Codeforces Round 780 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1660/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 26-10-2023 16:27:40
// Duration: 0:17:18
// End: 2023-10-26 16:44:58
// Rating: 1600
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
using ll = long long;

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		char arr[n][n];
		ll   onez = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
				if (arr[i][j] == '1') onez++;
			}

		int imax = 0;
		for (int i = 0; i < n; i++) {
			int curr = 0;
			for (int j = 0; j < n; j++)
				if (arr[(i + j) % n][j] == '1') curr++;

			imax = max(imax, curr);
		}

		cout << max(0ll, onez - imax + n - imax) << endl;
	}
	return 0;
}
