// Problem: B. Equalize
// Contest: Codeforces - Codeforces Round 924 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1928/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-02-2024 20:29:32
// Duration: 0:43:47
// End: 2024-02-16 21:13:19
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
	ll n, sz;
	cin >> n;
	set<ll> v;

	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		v.insert(j);
	}

	auto l = v.begin(), r = v.begin();
	ll   ans = 0, diffV = 0;
	while (r != v.end()) {
		ll diff = *r - *l;
		if (diff < n) ans = max(ans, ++diffV), r++;
		else
			l++, diffV--;
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
