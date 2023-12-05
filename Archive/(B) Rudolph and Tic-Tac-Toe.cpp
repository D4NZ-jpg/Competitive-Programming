// Problem: B. Rudolph and Tic-Tac-Toe
// Contest: Codeforces - Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1846/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 05-12-2023 08:14:04
// Duration: 0:10:53
// End: 2023-12-05 08:24:57
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

char solve() {
	char g[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) cin >> g[i][j];

	// Horizontal
	for (int i = 0; i < 3; i++)
		if (g[i][0] == g[i][1] && g[i][1] == g[i][2]
		    && g[i][0] != '.')
			return g[i][0];

	// Vertical
	for (int i = 0; i < 3; i++)
		if (g[0][i] == g[1][i] && g[1][i] == g[2][i]
		    && g[0][i] != '.')
			return g[0][i];

	// Diagonals
	if (g[0][0] == g[1][1] && g[1][1] == g[2][2] && g[0][0] != '.')
		return g[0][0];
	if (g[0][2] == g[1][1] && g[1][1] == g[2][0] && g[0][2] != '.')
		return g[0][2];
	return 'D';
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll t;
	cin >> t;
	while (t--) {
		char c = solve();
		if (c == 'D') cout << "DRAW" << endl;
		else
			cout << c << endl;
	}

	return 0;
}
