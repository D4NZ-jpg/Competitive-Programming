// Problem: A. Chess For Three
// Contest: Codeforces - Codeforces Round 945 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1973/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 17-05-2024 19:55:16
// Duration: 0:17:38
// End: 2024-05-17 20:12:54
// Rating: 900
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
		ll a, b, c;
		cin >> a >> b >> c;

		if ((a + b + c) % 2) {
			cout << -1 << endl;
			continue;
		}

		ll ans = -69;
		for (ll i = 0; i < 30; i++)            // 1 2
			for (ll j = 0; j < 30; j++)        // 1 3
				for (ll k = 0; k < 30; k++) {  // 2 3
					ll na = i + j, nb = i + k, nc = j + k;

					if (a - na >= 0 && (a - na) % 2 == 0
					    && b - nb >= 0 && (b - nb) % 2 == 0
					    && c - nc >= 0 && (c - nc) % 2 == 0)
						ans = max(ans, i + j + k);
				}

		cout << ans << endl;
	}

	return 0;
}
