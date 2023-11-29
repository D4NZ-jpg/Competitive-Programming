// Problem: F. We Were Both Children
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1850/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 27-11-2023 23:30:09
// Duration: 0:04:21
// End: 2023-11-27 23:34:30
// Rating: 1300
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll> ans(n + 1), cnt(n + 1);
		for (int i = 0; i < n; i++) {
			ll j;
			cin >> j;
			if (j <= n) cnt[j]++;
		}

		for (int i = 1; i <= n; i++)
			for (int j = i; j <= n; j += i) ans[j] += cnt[i];

		cout << *max_element(all(ans)) << endl;
	}

	return 0;
}
