// Problem: B. StORage room
// Contest: Codeforces - Codeforces Round 912 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1903/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 30-11-2023 10:42:53
// Duration: 0:28:03
// End: 2023-11-30 11:10:56
// Rating: None
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll m[n][n];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) cin >> m[i][j];

		if (n == 1) {
			cout << "YES" << endl << "1" << endl;
			continue;
		}

		vector<ll> v(n);
		for (int i = 0; i < n; i++) {
			ll ans = -1;
			for (int j = 0; j < n; j++) {
				if (i == j) continue;
				if (ans == -1) ans = m[i][j];
				else
					ans &= m[i][j];
			}

			v[i] = ans;
		}

		bool possible = true;
		for (int i = 0; i < n && possible; i++)
			for (int j = 0; j < n && possible; j++)
				if (i != j) possible = m[i][j] == (v[i] | v[j]);

		cout << (possible ? "YES" : "NO") << endl;
		if (possible) {
			for (ll& i : v) cout << i << ' ';
			cout << endl;
		}
	}
	return 0;
}
