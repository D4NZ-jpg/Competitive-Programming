// Problem: D. Yet Another Monster Fight
// Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1901/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 04-12-2023 15:38:13
// Duration: 2:26:48
// End: 2023-12-04 18:05:01
// Rating: 1700
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

	ll n;
	cin >> n;
	vector<ll> v(n), suf(n), pre(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		suf[i] = v[i] + i;
		pre[i] = v[i] + n - i - 1;

		if (i) pre[i] = max(pre[i], pre[i - 1]);
	}

	for (int i = n - 2; i >= 0; i--) suf[i] = max(suf[i], suf[i + 1]);

	ll ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		ll c = v[i];
		if (i) c = max(c, pre[i - 1]);
		if (i + 1 < n) c = max(c, suf[i + 1]);
		ans = min(ans, c);
	}

	cout << ans;
}
