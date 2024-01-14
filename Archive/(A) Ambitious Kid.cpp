// Problem: A. Ambitious Kid
// Contest: Codeforces - COMPFEST 15 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1866/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 07-01-2024 14:54:37
// Duration: 0:01:11
// End: 2024-01-07 14:55:48
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

	ll n, ans = INT_MAX;
	cin >> n;

	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;

		ans = min(ans, abs(j));
	}

	cout << ans;

	return 0;
}
