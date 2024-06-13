// Problem: C. Arrow Path
// Contest: Codeforces - Educational Codeforces Round 163 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1948/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-03-2024 08:55:58
// Duration: 0:32:05
// End: 2024-03-15 09:28:03
// Rating: 1300
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

bool dfs(const vector<vector<char>>& g, vector<vector<int>>& mem,
         ll n, ll r, ll c, bool move) {
	if (mem[r][c] != -1) return mem[r][c];

	if (r == 1 && c == n - 1) return mem[r][c] = 1;

	if (!move) {
		if (g[r][c] == '<') return mem[r][c] = 0;
		return mem[r][c] = dfs(g, mem, n, r, c + 1, true);
	}

	bool h = dfs(g, mem, n, r, c + 1, false);
	if (h) return mem[r][c] = 1;

	return mem[r][c] = dfs(g, mem, n, (r == 0 ? 1 : 0), c, false);
}

bool solve() {
	ll n;
	cin >> n;

	vector<vector<char>> g(2, vector<char>(n));
	vector<vector<int>>  mem(2, vector<int>(n, -1));
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < n; j++) cin >> g[i][j];

	bool ans = dfs(g, mem, n, 0, 0, true);

	return ans;
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
