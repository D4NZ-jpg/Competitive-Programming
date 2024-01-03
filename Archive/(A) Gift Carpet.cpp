// Problem: A. Gift Carpet
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1862/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 01-01-2024 10:54:45
// Duration: 0:13:51
// End: 2024-01-01 11:08:36
// Rating: 800
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
	ll n, m;
	cin >> n >> m;

	set<ll> q[4];
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			if (s[j] == 'v') q[0].insert(j);
			if (s[j] == 'i') q[1].insert(j);
			if (s[j] == 'k') q[2].insert(j);
			if (s[j] == 'a') q[3].insert(j);
		}
	}

	auto it = q[0].begin();
	if (q[0].empty()) return false;
	else
		for (int i = 1; i < 4; i++) {
			it = q[i].upper_bound(*it);
			if (it == q[i].end()) return false;
		}

	return it != q[3].end();
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
