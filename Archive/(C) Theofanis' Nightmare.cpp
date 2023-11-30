// Problem: C. Theofanis' Nightmare
// Contest: Codeforces - Codeforces Round 912 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1903/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-11-2023 11:17:00
// Duration: 1:10:20
// End: 2023-11-30 12:27:20
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
		vector<ll> v(n);
		for (int i = n - 1; i >= 0; i--) cin >> v[i];

		ll ans = 0, sum = 0;
		for (int i = 0; i < n; i++) {
			sum += v[i];
			if (sum > 0) ans += sum;
		}

		if (sum < 0) ans += sum;
		cout << ans << endl;
	}
}
