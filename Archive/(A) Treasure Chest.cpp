// Problem: A. Treasure Chest
// Contest: Codeforces - Educational Codeforces Round 157 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1895/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 15-12-2023 22:12:44
// Duration: 0:04:37
// End: 2023-12-15 22:17:21
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

ll solve() {
	ll x, y, k;
	cin >> x >> y >> k;

	if (x > y) return x;
	return 2 * y - min(x + k, y);
}
int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
