// Problem: B. Permutation Swap
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1828/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 10-11-2023 18:53:04
// Duration: 0:02:39
// End: 2023-11-10 18:55:43
// Rating: 900
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

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll> v(n);
		for (int i = 0; i < n; i++) {
			ll j;
			cin >> j;
			v[i] = abs(--j - i);
		}
		ll x = v[0];
		for (ll& i : v) x = gcd(x, i);
		cout << x << endl;
	}
	return 0;
}
