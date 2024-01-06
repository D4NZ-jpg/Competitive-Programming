// Problem: C. Grouping Increases
// Contest: Codeforces - Hello 2024
// URL: https://codeforces.com/problemset/problem/1919/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-01-2024 08:45:19
// Duration: 1:34:47
// End: 2024-01-06 10:20:06
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

	ll tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		ll ans = 0, x = INT_MAX, y = INT_MAX;
		for (ll& i : v) {
			// keep x as the lowest
			if (x > y) swap(x, y);

			if (i <= x) x = i;
			else if (i <= y)
				y = i;
			else
				x = i, ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
