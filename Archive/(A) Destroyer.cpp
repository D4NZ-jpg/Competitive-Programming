// Problem: A. Destroyer
// Contest: Codeforces - Codeforces Round 880 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1836/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-06-2023 08:37:46
// Duration: 0:08:03
// End: 2023-06-18 08:45:49
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	short t;
	cin >> t;
	while (t--) {
		short n;
		cin >> n;
		bool possible = true;

		map<int, int> vals;
		int           imax = 0;
		while (n--) {
			int tmp;
			cin >> tmp;
			vals[tmp]++;
			imax = max(imax, tmp);
		}

		int k = INT_MAX;
		for (int i = 0; i <= imax; i++) {
			if (vals[i] > k) {
				possible = false;
				break;
			}

			k = vals[i];
		}
		if (possible) cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}