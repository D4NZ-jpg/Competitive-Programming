// Problem: B. Chip and Ribbon
// Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1901/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-12-2023 22:08:23
// Duration: 0:12:56
// End: 2023-12-02 22:21:19
// Rating: 1100
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
		vector<ll> v(n);
		for (ll& i : v) cin >> i;

		ll curr = 1, ops = 0;

		for (ll& i : v) {
			ll d = i - curr;
			ops += max(0ll, d);
			curr += d;
		}
		cout << ops << endl;
	}
	return 0;
}
