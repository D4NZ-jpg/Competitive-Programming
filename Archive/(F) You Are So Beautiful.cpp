// Problem: F. You Are So Beautiful
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 14-12-2023 21:03:39
// Duration: 1:41:21
// End: 2023-12-14 22:45:00
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

		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		set<ll>    found, vis;
		vector<ll> pos;
		for (int i = n - 1; i >= 0; i--) {
			if (found.count(v[i])) continue;
			found.insert(v[i]);
			pos.pb(i);
		}
		reverse(all(pos));

		ll ans = 0;
		for (int i = 0; i < n; i++) {
			if (vis.count(v[i])) continue;
			vis.insert(v[i]);

			ans +=
			  pos.size() - (lower_bound(all(pos), i) - pos.begin());
		}

		cout << ans << endl;
	}

	return 0;
}
