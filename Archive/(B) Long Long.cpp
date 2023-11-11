// Problem: B. Long Long
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1843/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 20-06-2023 08:35:44
// Duration: 0:24:04
// End: 2023-06-20 08:59:48
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

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		uint64_t sum = 0, ops = 0;
		bool     prev = false;

		while (n--) {
			int k;
			cin >> k;
			sum += abs(k);
			if (k < 0 && !prev) {
				ops++;
				prev = true;
			}
			if (k > 0) prev = false;
		}
		cout << sum << ' ' << ops << '\n';
	}

	return 0;
}