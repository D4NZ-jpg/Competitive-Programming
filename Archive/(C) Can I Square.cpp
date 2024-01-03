// Problem: C. Can I Square?
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1915/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 29-12-2023 22:45:55
// Duration: 0:01:28
// End: 2023-12-29 22:47:23
// Rating: 800
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
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			ll j;
			cin >> j;
			sum += j;
		}

		ll x = sqrt(sum);
		if (x * x == sum) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
