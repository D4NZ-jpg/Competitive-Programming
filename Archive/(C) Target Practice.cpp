// Problem: C. Target Practice
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 21-09-2023 17:04:57
// Duration: 0:24:52
// End: 2023-09-21 17:29:49
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
		int64_t sum = 0;
		for (int y = 0; y < 10; y++)
			for (int x = 0; x < 10; x++) {
				char c;
				cin >> c;
				if (c == '.') continue;

				int nx = x, ny = y;
				if (nx > 4) nx = abs(nx - 9);
				if (ny > 4) ny = abs(ny - 9);
				sum += min(nx, ny) + 1;
			}
		cout << sum << endl;
	}
	return 0;
}

/*
 1234554321
 X.........
 ..........
 .......X..
 .....X....
 ......X...
 ..........
 .........X
 ..X.......
 ..........
 .........X

*/
