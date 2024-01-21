// Problem: Summation Game
// Contest: Codeforces
// URL: https://codeforces.com/problemset/problem/1920/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-01-2024 08:47:22
// Duration: 0:32:42
// End: 2024-01-13 09:20:04
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll n, k, x, sum = 0;
		cin >> n >> k >> x;
		vector<ll> v(n), pre(n);

		for (auto& i : v) cin >> i;
		sort(all(v), greater<ll>());
		pre[0] = v[0];
		for (int i = 1; i < n; i++) pre[i] = v[i] + pre[i - 1];

		sum    = pre[n - 1];
		ll ans = sum - (2 * pre[min(n - 1, x - 1)]);
		for (int i = 0; i < k; i++) {
			ll curr    = sum - pre[i];
			ll flipped = pre[min(n - 1, i + x)] - pre[i];

			ans = max(ans, curr - flipped - flipped);
		}
		cout << ans << endl;
	}
	return 0;
}
