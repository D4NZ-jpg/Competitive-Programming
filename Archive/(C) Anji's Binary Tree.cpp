// Problem: C. Anji's Binary Tree
// Contest: Codeforces - Codeforces Round 911 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1900/C
// Memory Limit: 256 MB
// Time Limit: 2500 ms
// Start: 26-11-2023 08:58:17
// Duration: 0:13:04
// End: 2023-11-26 09:11:21
// Rating: 1300
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

ll solve(vector<pair<ll, ll>>& g, string& vals, ll t) {
	ll a = g[t].first, b = g[t].second;
	if (!a && !b) return 0;

	ll x = INT_MAX, y = INT_MAX;

	if (a) x = solve(g, vals, a);
	if (b) y = solve(g, vals, b);

	char type = vals[t - 1];
	if (type == 'U') x++, y++;
	else if (type == 'L')
		y++;
	else
		x++;

	return min(x, y);
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
		ll     n;
		string vals;
		cin >> n >> vals;

		vector<pair<ll, ll>> g(n + 2);
		for (int i = 1; i <= n; i++) {
			ll a, b;
			cin >> a >> b;
			g[i] = {a, b};
		}

		cout << solve(g, vals, 1) << endl;
	}
	return 0;
}
