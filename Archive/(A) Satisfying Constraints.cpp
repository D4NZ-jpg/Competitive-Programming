// Problem: Satisfying Constraints
// Contest: Codeforces
// URL: https://codeforces.com/problemset/problem/1920/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-01-2024 08:37:01
// Duration: 0:09:55
// End: 2024-01-13 08:46:56
// Rating: 800
#include <bits/stdc++.h>

#include <algorithm>
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
		ll         lb = 0, ub = INT_MAX;
		vector<ll> exclude;
		ll         n;
		cin >> n;

		while (n--) {
			ll op, x;
			cin >> op >> x;
			if (op == 1) lb = max(lb, x);
			else if (op == 2)
				ub = min(ub, x);
			else
				exclude.pb(x);
		}

		sort(all(exclude));

		ll ans      = ub - lb + 1;
		ll excluded = upper_bound(all(exclude), ub)
		              - lower_bound(all(exclude), lb);
		cout << max(ans - excluded, 0ll) << endl;
	}

	return 0;
}
