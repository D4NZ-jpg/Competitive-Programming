// Problem: D. 1D Eraser
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 21-09-2023 17:30:37
// Duration: 0:30:50
// End: 2023-09-21 18:01:27
// Rating: 800
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
		int k, n, cnt = 0, idx = 0;
		cin >> n >> k;

		for (int i = 0; i < n; i++) {
			char c;
			cin >> c;
			if (i < idx) continue;
			if (c == 'B') { cnt++, idx = i + k; }
		}
		cout << cnt << endl;
	}
	return 0;
}
