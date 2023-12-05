// Problem: D1. Maximum And Queries (easy version)
// Contest: Codeforces - Codeforces Round 912 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1903/D1
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 04-12-2023 13:45:57
// Duration: 1:23:03
// End: 2023-12-04 15:09:00
// Rating: 1700
#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

ll solve(vector<ll> v, ll k) {
	ll ans = 0;

	for (long long bit = 60; bit >= 0; bit--) {
		ll totalCost = 0, mask = 1ll << bit;

		for (ll i = 0; i < v.size() && totalCost <= k; i++) {
			ll curr = v[i];
			if (mask & curr) continue;

			totalCost += mask - ((mask - 1) & curr);
		}

		if (totalCost <= k) {
			for (ll& i : v)
				if (!(mask & i)) i = 0;

			k -= totalCost;
			ans |= mask;
		}
	}

	return ans;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n, q;
	cin >> n >> q;
	vector<ll> v(n);
	for (ll& i : v) cin >> i;

	while (q--) {
		ll k;
		cin >> k;
		cout << solve(v, k) << endl;
	}

	return 0;
}

/*
* 1111111111111111111111111111111
* 100001101111001010010010110011001010011011
*/
