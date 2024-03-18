// Problem: D. Solve The Maze
// Contest: Codeforces - Codeforces Round 648 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1365/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 11-03-2024 19:03:59
// Duration: 0:41:48
// End: 2024-03-11 19:45:47
// Rating: 1700
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

	vector<vector<char>> g(r, vector<char>(c));
	vector<vector<bool>> v1(r, vector<bool>(c)),
	  v2(r, vector<bool>(c));

	ll goodPpl = 0, reached = 0;
	// read
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			cin >> g[i][j];
			if (g[i][j] == 'G') goodPpl++;
		}

	// Capture Bad
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			if (g[i][j] != 'B' || v1[i][j]) continue;

			queue<pll> q;
			q.push({i, j});
			while (q.size()) {
				pll curr = q.front();
				q.pop();

				ll y = curr.first, x = curr.second;

				char cell = g[y][x];
				if (cell == '#' || v1[y][x]) continue;
				if (cell == '.') {
					g[y][x] = '#';
					continue;
				}

				v1[y][x] = true;
				if (y > 0) q.push({y - 1, x});
				if (y + 1 < r) q.push({y + 1, x});
				if (x > 0) q.push({y, x - 1});
				if (x + 1 < c) q.push({y, x + 1});
			}
		}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) cerr << g[i][j];
		cerr << endl;
	}
	if ((g[r - 1][c - 1] == '#' && goodPpl > 0)
	    || g[r - 1][c - 1] == 'B')
		return false;

	// BFS
	queue<pll> q;
	q.push({r - 1, c - 1});
	while (q.size()) {
		pll curr = q.front();
		q.pop();

		ll   y = curr.first, x = curr.second;
		char cell = g[y][x];
		if (cell == '#' || v2[y][x]) continue;
		if (cell == 'G') reached++;

		v2[y][x] = true;
		if (y > 0) q.push({y - 1, x});
		if (y + 1 < r) q.push({y + 1, x});
		if (x > 0) q.push({y, x - 1});
		if (x + 1 < c) q.push({y, x + 1});
	}

	return reached == goodPpl;
}
int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << (solve() ? "Yes" : "No") << endl;

	return 0;
}
