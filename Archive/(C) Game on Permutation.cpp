// Problem: C. Game on Permutation
// Contest: Codeforces - Educational Codeforces Round 153 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1860/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-12-2023 13:08:06
// Duration: 0:12:11
// End: 2023-12-18 13:20:17
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

		ll ans = 0, currMin = v[0], currMax = LONG_MAX;
		for (int i = 1; i < n; i++) {
			ll& curr = v[i];
			if (curr > currMin && curr <= currMax) {
				currMax = curr;
				ans++;
			}
			currMin = min(curr, currMin);
		}
		cout << ans << endl;
	}

	return 0;
}
