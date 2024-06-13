// Problem: B. A BIT of a Construction
// Contest: Codeforces - Codeforces Round 940 (Div. 2) and CodeCraft-23
// URL: https://codeforces.com/problemset/problem/1957/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 14-05-2024 22:04:44
// Duration: 0:47:04
// End: 2024-05-14 22:51:48
// Rating: 1100
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
		ll n, k;
		cin >> n >> k;

		if (n == 1) cout << k << endl;
		else {
			const ll     bits = 8;
			bitset<bits> x(k), y(0), z(0);

			ll msb = 0;
			for (ll cp = k; cp >>= 1;) msb++;

			cout << (1 << msb) - 1 << ' ' << k - ((1 << msb) - 1)
			     << ' ';

			for (int i = 2; i < n; i++) cout << 0 << ' ';
			cout << endl;
		}
	}

	return 0;
}
