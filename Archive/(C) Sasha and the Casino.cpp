// Problem: C. Sasha and the Casino
// Contest: Codeforces - Codeforces Round 926 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1929/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-02-2024 09:28:47
// Duration: 0:45:35
// End: 2024-02-15 10:14:22
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
		ll k, x, a;
		cin >> k >> x >> a;

		ll lost = 0;
		for (int i = 0; i < x; i++) {
			ll curr = max(1ll, (lost + k - 1) / (k - 1));
			lost += curr;

			if (lost > a) break;
		}

		cout << ((a - lost) * k > a ? "YES" : "NO") << endl;
	}
	return 0;
}
