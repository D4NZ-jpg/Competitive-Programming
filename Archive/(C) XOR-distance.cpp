// Problem: C. XOR-distance
// Contest: Codeforces - Codeforces Round 922 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1918/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 14-02-2024 22:07:31
// Duration: 1:43:21
// End: 2024-02-14 23:50:52
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll a, b, r;
		cin >> a >> b >> r;
		bool xd = 0;

		if (a > b) swap(a, b);
		ll x = 0, mask = (1ll << 62);
		while (mask >>= 1)
			if ((a ^ b) & mask) {
				if (!xd) xd = true;
				else if (!(a & mask) && ((x | mask) <= r))
					x |= mask, a ^= mask, b ^= mask;
			}

		cout << b - a << endl;
	}
	return 0;
}
