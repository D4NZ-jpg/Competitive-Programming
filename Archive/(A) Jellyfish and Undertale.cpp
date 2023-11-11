// Problem: A. Jellyfish and Undertale
// Contest: Codeforces - Codeforces Round 901 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1875/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-09-2023 08:35:12
// Duration: 0:05:28
// End: 2023-09-30 08:40:40
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
		int a, b, n;
		cin >> a >> b >> n;
		int64_t time = b;
		for (int i = 0; i < n; i++) {
			int j;
			cin >> j;

			if (j < a) time += j;
			else
				time += a - 1;
		}
		cout << time << endl;
	}

	return 0;
}
