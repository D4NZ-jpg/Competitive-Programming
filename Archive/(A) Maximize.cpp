// Problem: A. Maximize?
// Contest: Codeforces - Codeforces Round 943 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1968/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-05-2024 08:45:14
// Duration: 0:08:42
// End: 2024-05-02 08:53:56
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
		ll x;
		cin >> x;

		ll ans = 0, out = -1;
		for (ll i = 1; i < x; i++) {
			ll tmp = gcd(x, i) + i;
			if (ans < tmp) ans = tmp, out = i;
		}

		cout << out << endl;
	}

	return 0;
}
