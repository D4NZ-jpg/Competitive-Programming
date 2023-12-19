// Problem: D. Two-Colored Dominoes
// Contest: Codeforces - Pinely Round 2 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1863/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 17-12-2023 17:33:49
// Duration: 0:41:02
// End: 2023-12-17 18:14:51
// Rating: 1400
#include <bits/stdc++.h>

#include <any>
#include <iterator>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

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

	int tc;
	cin >> tc;
	while (tc--) {
		ll n, m;
		cin >> n >> m;

		vector<string> g(n, string(m, '.'));
		vector<bool>   cols(501), row(501);

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) cin >> g[i][j];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				if (g[i][j] != 'U') continue;

				if (row[i]) g[i][j] = 'B', g[i + 1][j] = 'W';
				else
					g[i][j] = 'W', g[i + 1][j] = 'B';

				row[i] = !row[i];
			}

		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) {
				if (g[j][i] != 'L') continue;

				if (cols[i]) g[j][i] = 'B', g[j][i + 1] = 'W';
				else
					g[j][i] = 'W', g[j][i + 1] = 'B';

				cols[i] = !cols[i];
			}

		bool impos = false;
		for (const bool& i : cols) impos = impos | i;
		for (const bool& i : row) impos = impos | i;

		if (impos) cout << -1 << endl;
		else
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) cout << g[i][j];
				cout << endl;
			}
	}
	return 0;
}
