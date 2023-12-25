// Problem: C. Watering an Array
// Contest: Codeforces - Codeforces Round 917 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1917/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 24-12-2023 10:12:39
// Duration: 3:51:01
// End: 2023-12-24 14:03:40
// Rating: None
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
		ll n, k, d;
		cin >> n >> k >> d;
		vector<ll> a(n), v(k);
		for (auto& i : a) cin >> i;
		for (auto& i : v) cin >> i;
		ll ans = 0;

		for (int i = 0; i < min(3 * n, d); i++) {
			ll curr = (d - i - 1) / 2, vi = v[i % k];

			for (int j = 0; j < n; j++)
				if (j + 1 == a[j]) curr++;

			for (int j = 0; j < vi; j++) a[j]++;

			ans = max(ans, curr);
		}
		cout << ans << endl;
	}
	return 0;
}
