// Problem: A. Destroying Bridges
// Contest: Codeforces - Codeforces Round 934 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1944/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-03-2024 08:34:58
// Duration: 0:02:53
// End: 2024-03-16 08:37:51
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
	ll n, k;
	cin >> n >> k;

	if (k + 1 >= n) return 1;
	return n;
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
