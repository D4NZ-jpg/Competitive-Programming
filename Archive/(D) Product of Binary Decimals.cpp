// Problem: D. Product of Binary Decimals
// Contest: Codeforces - Codeforces Round 937 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1950/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 01-04-2024 13:05:07
// Duration: 0:21:02
// End: 2024-04-01 13:26:09
// Rating: 1100
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

bool isBin(ll x) {
	while (x) {
		ll num = x % 10;
		if (num != 0 && num != 1) return false;
		x /= 10;
	}
	return true;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<ll> v;
	for (ll i = 2;; i++) {
		bitset<64> tmp(i);
		ll         x = atoi(tmp.to_string().c_str());

		if (x > 1e5) break;
		v.pb(x);
	}

	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		if (isBin(n)) {
			cout << "YES" << endl;
			continue;
		}

		bool win = false;
		for (ll& i : v) {
			if (n == 1) {
				win = true;
				break;
			}

			while (!(n % i)) n /= i;
		}
		cerr << endl;

		if (win) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
