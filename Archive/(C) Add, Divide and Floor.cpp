// Problem: C. Add, Divide and Floor
// Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1901/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-12-2023 21:50:04
// Duration: 0:16:56
// End: 2023-12-02 22:07:00
// Rating: 1400
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
		vector<ll> v(n), ans;
		for (ll& i : v) cin >> i;
		sort(all(v));
		if (n == 1) {
			cout << 0 << endl;
			continue;
		}
		ll a = v[0], b = v[n - 1];

		while (a != b) {
			ans.pb(a % 2);
			b = (b + (a % 2)) / 2;
			a = (a + (a % 2)) / 2;
		}

		cout << ans.size() << endl;
		if (ans.size() <= n) {
			for (ll& i : ans) cout << i << ' ';
			cout << endl;
		}
	}

	return 0;
}
