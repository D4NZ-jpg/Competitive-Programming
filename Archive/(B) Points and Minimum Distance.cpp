// Problem: B. Points and Minimum Distance
// Contest: Codeforces - Educational Codeforces Round 157 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1895/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 07-12-2023 13:44:31
// Duration: 0:06:46
// End: 2023-12-07 13:51:17
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;

		vector<ll> v(2 * n);
		for (auto& i : v) cin >> i;

		sort(all(v));
		vector<pll> p;
		for (int i = 0; i < n; i++)
			p.pb(make_pair(v[i], v[2 * n - i - 1]));

		ll ans = 0;
		for (int i = 0; i < n - 1; i++) {
			auto prev = p[i + 1], act = p[i];

			ans += abs(prev.first - act.first)
			       + abs(prev.second - act.second);
		}

		cout << ans << endl;
		for (pll& i : p) cout << i.first << ' ' << i.second << endl;
	}

	return 0;
}
