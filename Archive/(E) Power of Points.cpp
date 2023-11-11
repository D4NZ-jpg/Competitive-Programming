// Problem: E. Power of Points
// Contest: Codeforces - Codeforces Round 891 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1857/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 24-10-2023 19:54:59
// Duration: 1:00:22
// End: 2023-10-24 20:55:21
// Rating: 1500
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
using ll = long long;
int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll> v(n), cp(n), sum(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			cp[i] = v[i];
		}
		sort(all(cp));
		sum[0] = cp[0];
		for (int i = 1; i < n; i++) sum[i] = sum[i - 1] + cp[i];

		for (int i = 0; i < n; i++) {
			ll s = v[i];

			auto it = lower_bound(all(cp), s);
			int  l  = it - cp.begin();

			ll pre = sum[l], pos = sum[n - 1] - sum[l];

			cout << n + s * (2ll * (l + 1) - n) - pre + pos << ' ';
		}
		cout << endl;
	}
	return 0;
}
