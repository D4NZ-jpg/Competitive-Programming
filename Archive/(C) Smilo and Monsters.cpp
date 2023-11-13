// Problem: C. Smilo and Monsters
// Contest: Codeforces - Codeforces Round 907 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1891/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 12-11-2023 11:56:14
// Duration: 1:50:04
// End: 2023-11-12 13:46:18
// Rating: 1500
#include <bits/stdc++.h>
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

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll> v(n);

		for (ll& i : v) cin >> i;
		sort(all(v));

		ll l = 0, r = n - 1, x = 0, ops = 0;
		while (l < r) {
			// if we can't reach it
			if (x + v[l] < v[r]) {
				x += v[l], ops += v[l], v[l] = 0, l++;
				continue;
			}

			ll diff = v[r] - x;
			ops += diff + 1, v[l] -= diff, v[r--] = 0, x = 0;
		}

		if (v[l]) ops += min((v[l] - x + 1) / 2 + 1, v[l]);

		cout << ops << endl;
	}

	return 0;
}
