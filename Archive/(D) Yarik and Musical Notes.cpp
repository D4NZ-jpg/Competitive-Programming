// Problem: D. Yarik and Musical Notes
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 28-11-2023 18:44:56
// Duration: 1:22:08
// End: 2023-11-28 20:07:04
// Rating: 1300
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
		map<ll, ll> m;
		vector<ll>  v(n);
		for (int i = 0; i < n; i++) {
			ll j;
			cin >> j;
			m[j]++;
			v[i] = j;
		}

		ll out = 0;
		for (ll& i : v) {
			out += --m[i];
			if (i == 2) out += m[1];
			if (i == 1) out += m[2];
		}
		cout << out << endl;
	}
	return 0;
}
