// Problem: B. Rectangle Filling
// Contest: Codeforces - Codeforces Round 941 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1966/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 27-04-2024 09:03:14
// Duration: 1 day, 11:34:53
// End: 2024-04-28 20:38:07
// Rating: 1100
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

bool solve() {
	ll r, c;
	cin >> r >> c;

	char g[r][c];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) cin >> g[i][j];

	if ((g[0][0] == g[r - 1][c - 1]) || (g[r - 1][0] == g[0][c - 1]))
		return true;

	bool tl = 0;
	{
		bool h = false, v = false;
		for (int i = 0; i < c; i++)
			if (g[0][i] != g[0][0]) h = true;
		for (int i = 0; i < r; i++)
			if (g[i][0] != g[0][0]) v = true;

		tl = h && v;
	}

	bool tr = 0;
	{
		bool h = false, v = false;
		for (int i = 0; i < c; i++)
			if (g[0][i] != g[0][c - 1]) h = true;
		for (int i = 0; i < r; i++)
			if (g[i][c - 1] != g[0][c - 1]) v = true;

		tr = h && v;
	}

	bool bl = 0;
	{
		bool h = false, v = false;
		for (int i = 0; i < c; i++)
			if (g[r - 1][i] != g[r - 1][0]) h = true;
		for (int i = 0; i < r; i++)
			if (g[i][0] != g[r - 1][0]) v = true;

		bl = h && v;
	}

	bool br = 0;
	{
		bool h = false, v = false;
		for (int i = 0; i < c; i++)
			if (g[r - 1][i] != g[r - 1][c - 1]) h = true;
		for (int i = 0; i < r; i++)
			if (g[i][c - 1] != g[r - 1][c - 1]) v = true;

		br = h && v;
	}

	return ((g[0][0] != g[r - 1][c - 1]) && (tl || br))
	       || ((g[r - 1][0] != g[0][c - 1]) && (bl || tr));
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << (solve() ? "YES" : "NO") << endl;

	return 0;
}
