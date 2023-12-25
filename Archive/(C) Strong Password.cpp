// Problem: C. Strong Password
// Contest: Codeforces - Educational Codeforces Round 151 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1845/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 22-12-2023 11:53:19
// Duration: 0:18:07
// End: 2023-12-22 12:11:26
// Rating: 1400
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

bool solve(vector<vector<ll>>& pos, string& l, string& u, ll idx,
           ll last) {
	if (idx == l.size()) return false;

	ll rightmost = 0;
	for (char c = l[idx]; c <= u[idx]; c++) {
		auto it = upper_bound(all(pos[c - '0']), last);
		if (it == pos[c - '0'].end()) return true;
		rightmost = max(*it, rightmost);
	}

	return solve(pos, l, u, idx + 1, rightmost);
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		string s, l, u;
		ll     m;
		cin >> s >> m >> l >> u;

		vector<vector<ll>> pos(10);
		for (int i = 0; i < s.size(); i++) pos[s[i] - '0'].pb(i);

		bool out = solve(pos, l, u, 0, -1);
		cerr << "=======" << endl;

		cout << (out ? "YES" : "NO") << endl;
	}

	return 0;
}
