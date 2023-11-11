// Problem: G. The Morning Star
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1850/G
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 28-10-2023 12:19:33
// Duration: 0:18:46
// End: 2023-10-28 12:38:19
// Rating: 1500
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
		map<int, ll> v, h, d1, d2;

		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;

			v[x]++, h[y]++, d1[x - y]++, d2[x + y]++;
		}
		ll ans = 0;

		for (auto& i : v) ans += i.second * (i.second - 1);
		for (auto& i : h) ans += i.second * (i.second - 1);
		for (auto& i : d1) ans += i.second * (i.second - 1);
		for (auto& i : d2) ans += i.second * (i.second - 1);

		cout << ans << endl;
	}

	return 0;
}
