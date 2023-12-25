// Problem: C. Vampiric Powers, anyone?
// Contest: Codeforces - Codeforces Round 882 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1847/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 21-12-2023 13:14:03
// Duration: 0:05:27
// End: 2023-12-21 13:19:30
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
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		vector<bool> vis(1 << 8);
		vis[0] = true;
		ll ans = 0, curr = 0;

		for (ll& i : v) {
			curr ^= i;

			for (int j = 0; j < 1 << 8; j++)
				if (vis[j]) ans = max(ans, j ^ curr);

			vis[curr] = true;
		}

		cout << ans << endl;
	}

	return 0;
}
