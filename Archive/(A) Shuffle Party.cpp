// Problem: A. Shuffle Party
// Contest: Codeforces - Codeforces Round 930 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1937/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 15-05-2024 16:41:36
// Duration: 0:03:33
// End: 2024-05-15 16:45:09
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

		ll ans = 0;
		while (n >>= 1) ans++;
		cout << (1 << ans) << endl;
	}

	return 0;
}
