// Problem: A. Stickogon
// Contest: Codeforces - Codeforces Round 940 (Div. 2) and CodeCraft-23
// URL: https://codeforces.com/problemset/problem/1957/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 14-05-2024 22:02:47
// Duration: 0:01:41
// End: 2024-05-14 22:04:28
// Rating: 800
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		vector<ll> v(101);
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v[x]++;
		}

		ll ans = 0;
		for (int i = 1; i <= 100; i++) ans += v[i] / 3;
		cout << ans << endl;
	}

	return 0;
}
