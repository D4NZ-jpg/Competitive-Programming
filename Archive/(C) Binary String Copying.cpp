// Problem: C. Binary String Copying
// Contest: Codeforces - Educational Codeforces Round 152 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1849/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 20-12-2023 15:01:38
// Duration: 0:11:21
// End: 2023-12-20 15:12:59
// Rating: 1600
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll         n, m;
		string     s;
		vector<ll> o, z;
		cin >> n >> m >> s;

		for (int i = 0; i < n; i++)
			if (s[i] == '1') o.pb(i);
			else
				z.pb(i);

		set<pll> ans;
		while (m--) {
			ll l, r;
			cin >> l >> r;

			auto lo = lower_bound(all(o), l - 1);
			auto rz = --upper_bound(all(z), r - 1);

			if (lo == o.end() || rz == z.end() || rz == z.begin() - 1
			    || *rz <= *lo)
				ans.insert({-1, -1});
			else
				ans.insert({*lo, *rz});
		}
		cout << ans.size() << endl;
	}
	return 0;
}
