// Problem: F. Circle Perimeter
// Contest: Codeforces - Codeforces Round 944 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1971/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 14-05-2024 20:16:05
// Duration: 0:22:39
// End: 2024-05-14 20:38:44
// Rating: 1600
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
		ll r;
		cin >> r;

		double lo = r * r, hi = (r + 1) * (r + 1);

		ll x = r, y = 0, ans = 0;

		while (x > 0) {
			ans++;
			double up   = (y + 1) * (y + 1) + x * x;
			double left = y * y + (x - 1) * (x - 1);

			if (up >= lo && up < hi) y++;
			else if (left >= lo && left < hi)
				x--;
			else
				x--, y++;
		}

		cout << 4 * ans << endl;
	}

	return 0;
}
