// Problem: C. Jellyfish and Green Apple
// Contest: Codeforces - Codeforces Round 901 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1875/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 15-12-2023 13:49:22
// Duration: 1:54:50
// End: 2023-12-15 15:44:12
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

ll solve(ll n, ll m, ll ans, ll idx) {
	if (!(n % m)) return ans;
	if (idx >= 1000) return -1;

	n %= m;
	ans += n, n *= 2;

	return solve(n, m, ans, idx + 1);
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
		ll n, m;
		cin >> n >> m;

		cout << solve(n, m, 0, 0) << endl;
	}
	return 0;
}
