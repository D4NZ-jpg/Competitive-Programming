// Problem: D. Jumping Through Segments
// Contest: Codeforces - Codeforces Round 913 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1907/D
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// Start: 06-12-2023 13:08:33
// Duration: 0:23:08
// End: 2023-12-06 13:31:41
// Rating: 1400
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

bool check(vector<pll>& v, ll k) {
	ll l = 0, r = 0;
	for (pll& i : v) {
		l -= k, r += k;
		if (r < i.first || l > i.second) return false;

		l = max(l, i.first), r = min(r, i.second);
	}

	return true;
}

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
		vector<pll> v(n);
		for (auto& i : v) cin >> i.first >> i.second;

		ll l = 0, r = 10000000000;
		while (l < r) {
			ll mid = (l + r) / 2;
			if (check(v, mid)) r = mid;
			else
				l = mid + 1;
		}
		cout << l << endl;
	}
	return 0;
}
