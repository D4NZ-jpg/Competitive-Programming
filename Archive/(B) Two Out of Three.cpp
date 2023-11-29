// Problem: B. Two Out of Three
// Contest: Codeforces - Codeforces Round 908 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1894/B
// Memory Limit: 512 MB
// Time Limit: 3000 ms
// Start: 16-11-2023 16:00:45
// Duration: 0:20:15
// End: 2023-11-16 16:21:00
// Rating: 1000
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

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
		vector<ll> v(n), ans(n), cnt(101), m(101);
		for (ll& i : v) cin >> i, cnt[i]++;

		ll m2 = 0;
		for (ll& i : cnt) m2 += i >= 2;
		if (m2 < 2) {
			cout << -1 << endl;
			continue;
		}

		ll   x;
		bool first = false;
		for (ll& i : v) {
			if (!m[i]++) {
				cout << 1 << ' ';
				continue;
			}

			if (first && i != x) cout << 3 << ' ';
			else {
				x = i;
				cout << 2 << ' ';
			}

			first = true;
		}
		cout << endl;
	}
	return 0;
}
