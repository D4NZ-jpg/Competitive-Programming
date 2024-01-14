// Problem: C. Partitioning the Array
// Contest: Codeforces - Codeforces Round 919 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1920/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 13-01-2024 09:20:47
// Duration: 0:55:00
// End: 2024-01-13 10:15:47
// Rating: None
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
		vector<ll> v(n), facs;
		for (auto& i : v) cin >> i;
		for (int i = 1; i * i <= n; i++)
			if (!(n % i)) {
				facs.pb(i);
				if (i * i != n) facs.pb(n / i);
			}

		ll ans = 0;
		for (int i = 0; i < facs.size(); i++) {
			if (facs[i] == n) {
				ans++;
				continue;
			}

			ll g = 0;
			for (int j = 0; j + facs[i] < n; j++)
				g = gcd(g, abs(v[j] - v[j + facs[i]]));

			if (g != 1) ans++;
		}

		cout << ans << endl;
	}

	return 0;
}
