// Problem: B. The Walkway
// Contest: Codeforces - Codeforces Round 893 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1858/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 01-11-2023 09:59:36
// Duration: 2 days, 2:12:35
// End: 2023-11-03 12:12:11
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

void solve() {
	ll n, m, d;
	cin >> n >> m >> d;
	vector<ll> v(m + 2);
	for (int i = 1; i <= m; i++) cin >> v[i];
	v[m + 1] = n + 1;
	v[0]     = 1 - d;

	auto candies = [&](int l, int r) { return (r - l - 1) / d; };

	ll total = 0, best = INT_MAX, cnt = 0;
	for (int i = 0; i <= m; i++) total += candies(v[i], v[i + 1]) + 1;
	total--;

	for (int i = 1; i <= m; i++) {
		ll sides = candies(v[i - 1], v[i]) + candies(v[i], v[i + 1]),
		   skipped = candies(v[i - 1], v[i + 1]);
		ll curr    = total - sides + skipped - 1;

		if (curr < best) best = curr, cnt = 1;
		else if (curr == best)
			cnt++;
	}

	cout << best << ' ' << cnt << endl;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) solve();

	return 0;
}
