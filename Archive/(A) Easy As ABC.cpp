// Problem: A. Easy As ABC
// Contest: Codeforces - 2023-2024 ICPC, Asia Jakarta Regional Contest (Online Mirror, Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1906/A
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// Start: 06-12-2023 21:09:29
// Duration: 0:16:15
// End: 2023-12-06 21:25:44
// Rating: 1000
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

string dfs(vector<vector<char>>& g, vector<vector<bool>> v, ll x,
           ll y, string s) {
	s += g[y][x];
	v[y][x] = true;

	if (s.size() >= 3) return s;
	string ans = s + 'Z';

	for (int i = -1; i <= 1; i++)
		for (int j = -1; j <= 1; j++) {
			ll ny = y + i, nx = x + j;
			if (ny < 0 || ny > 2 || nx < 0 || nx > 2) continue;
			if (v[ny][nx]) continue;

			string ns = dfs(g, v, nx, ny, s);
			cerr << ns << endl;
			ans = min(ans, ns);
		}

	return ans;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<vector<char>> g(3);
	vector<vector<bool>> v(3);

	for (int i = 0; i < 3; i++) {
		g[i].reserve(3);
		v[i].assign(3, false);
		for (int j = 0; j < 3; j++) cin >> g[i][j];
	}

	string ans = "zzz";

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			ans = min(ans, dfs(g, v, i, j, ""));
		}

	cout << ans;

	return 0;
}
