// Problem: E. Find the Car
// Contest: Codeforces - Codeforces Round 944 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1971/E
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 16-05-2024 17:42:25
// Duration: 2:21:14
// End: 2024-05-16 20:03:39
// Rating: 1500
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
		ll n, k, q;
		cin >> n >> k >> q;
		vector<ll> a(k + 1), b(k + 1);
		a[0] = b[0] = 0;
		for (int i = 1; i <= k; i++) cin >> a[i];
		for (int i = 1; i <= k; i++) cin >> b[i];

		while (q--) {
			ll d;
			cin >> d;

			auto it = upper_bound(all(a), d);
			if (it == a.end() || *it > d) it--;

			ll idx = it - a.begin();

			if (*it == d) {
				cout << b[idx] << ' ';
				continue;
			}

			ll dis = d - *it;
			//double v   = double(a[idx + 1] - a[idx]) / double(b[idx + 1] - b[idx]);

			cout << b[idx]
			          + (dis * (b[idx + 1] - b[idx]))
			              / (a[idx + 1] - a[idx])
			     << ' ';
		}
		cout << endl;
	}

	return 0;
}
