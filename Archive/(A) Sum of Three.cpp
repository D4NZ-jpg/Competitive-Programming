// Problem: A. Sum of Three
// Contest: Codeforces - Educational Codeforces Round 156 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1886/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 25-12-2023 12:41:39
// Duration: 0:08:40
// End: 2023-12-25 12:50:19
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
		bool x = false;
		ll   ans[3];

		for (int i = 1; i <= 2; i++)
			for (int j = 1; j <= 7; j++) {
				ll k = n - i - j;
				if (!(k % 3) || !(i % 3) || !(j % 3) || k <= 0
				    || i == j || i == k || j == k)
					continue;

				ans[0] = i, ans[1] = j, ans[2] = k;
				x = true;
			}

		if (x) {
			cout << "YES" << endl;
			cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl;
		} else
			cout << "NO" << endl;
	}
	return 0;
}
