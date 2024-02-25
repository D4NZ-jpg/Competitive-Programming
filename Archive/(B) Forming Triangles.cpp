// Problem: B. Forming Triangles
// Contest: Codeforces - Educational Codeforces Round 161 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1922/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 10-02-2024 13:28:28
// Duration: 0:07:52
// End: 2024-02-10 13:36:20
// Rating: 1200
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

ll solve() {
	ll n, ans = 0;
	cin >> n;

	vector<ll> v(n + 10);
	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		v[j]++;
	}
	ll pref = 0;
	for (int i = 0; i <= n; i++) {
		if (v[i] >= 3) ans += v[i] * (v[i] - 1) * (v[i] - 2) / 6;
		if (v[i] >= 2) ans += v[i] * (v[i] - 1) / 2 * pref;
		pref += v[i];
	}

	return ans;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
