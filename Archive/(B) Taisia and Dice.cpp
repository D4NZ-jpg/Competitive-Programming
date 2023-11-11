// Problem: B. Taisia and Dice
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1790/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 27-01-2023 08:48:59
// Duration: 0:13:39
// End: 2023-01-27 09:02:38
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
		int n, s, r, sum = 0;
		cin >> n >> s >> r;

		int max_d = s - r;
		sum += max_d;
		cout << max_d << ' ';

		for (int i = 0; i < n - 1; i++) {
		jmp:
			if (s - (sum + max_d) <= n - i - 3) {
				max_d--;
				goto jmp;
			}
			cout << max_d << ' ';
			sum += max_d;
		}
		cout << '\n';
	}
	return 0;
}