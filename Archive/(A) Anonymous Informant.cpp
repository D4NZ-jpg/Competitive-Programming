// Problem: A. Anonymous Informant
// Contest: Codeforces - Codeforces Round 908 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1893/A
// Memory Limit: 512 MB
// Time Limit: 3000 ms
// Start: 16-11-2023 18:52:22
// Duration: 12:48:03
// End: 2023-11-17 07:40:25
// Rating: 1400
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

bool solve() {
	ll n, k;
	cin >> n >> k;
	k = min(n, k);

	vector<ll> v(n);
	for (ll& i : v) cin >> i;

	ll idx = n - 1;
	while (k--) {
		ll x = v[idx];
		if (x > n) return false;
		idx += n - x;
		if (idx >= n) idx -= n;
	}

	return true;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll t;
	cin >> t;
	while (t--)
		if (solve()) cout << "Yes\n";
		else
			cout << "No\n";
	return 0;
}
