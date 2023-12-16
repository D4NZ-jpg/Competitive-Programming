// Problem: E. Look Back
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-12-2023 16:00:25
// Duration: 0:22:15
// End: 2023-12-13 16:22:40
// Rating: 1700
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
		ll n, prev, prevpow = 0, ans = 0;
		cin >> n >> prev;
		for (int i = 1; i < n; i++) {
			ll curr;
			cin >> curr;

			ll x = ceil(log2(double(prev) / curr)) + prevpow;
			x    = max(0ll, x);

			ans += x;
			prev    = curr;
			prevpow = x;
		}

		cout << ans << endl;
	}

	return 0;
}
