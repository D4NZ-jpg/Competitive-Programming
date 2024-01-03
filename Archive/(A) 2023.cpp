// Problem: A. 2023
// Contest: Codeforces - Good Bye 2023
// URL: https://codeforces.com/problemset/problem/1916/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-12-2023 08:50:30
// Duration: 0:04:35
// End: 2023-12-30 08:55:05
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
		ll n, k;
		cin >> n >> k;
		ll prod = 1;
		for (int i = 0; i < n; i++) {
			ll j;
			cin >> j;
			prod *= j;
		}

		ll missing = 2023 / prod;
		if (missing * prod == 2023) {
			cout << "YES" << endl;
			cout << missing << ' ';
			for (int i = 1; i < k; i++) cout << 1 << ' ';
			cout << endl;
		} else
			cout << "NO" << endl;
	}

	return 0;
}
