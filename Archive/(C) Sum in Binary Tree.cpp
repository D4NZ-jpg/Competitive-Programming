// Problem: C. Sum in Binary Tree
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1843/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-06-2023 08:35:45
// Duration: 0:29:53
// End: 2023-06-20 09:05:38
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
		uint64_t n, out = 0;
		cin >> n;

		while (n) {
			out += n;
			n /= 2;
		}

		cout << out << '\n';
	}

	return 0;
}