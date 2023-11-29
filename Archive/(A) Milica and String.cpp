// Problem: A. Milica and String
// Contest: Codeforces - Codeforces Round 910 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1898/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 19-11-2023 08:35:24
// Duration: 0:20:26
// End: 2023-11-19 08:55:50
// Rating: 800
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

	ll t;
	cin >> t;
	while (t--) {
		ll     n, k;
		string s;
		cin >> n >> k >> s;
		vector<ll> v(n);

		for (int i = 0; i < n; i++) {
			v[i] = s[i] == 'B';
			if (i) v[i] += v[i - 1];
		}

		ll total = v[n - 1];
		if (total == k) cout << 0 << endl;
		else if (total < k) {
			for (int i = 0; i < n; i++) {
				ll b = total - v[i] + (i + 1);
				if (b == k) {
					cout << 1 << endl << i + 1 << " B" << endl;
					break;
				}
			}
		} else {
			for (int i = 0; i < n; i++) {
				ll b = total - v[i];
				if (b == k) {
					cout << 1 << endl << i + 1 << " A" << endl;
					break;
				}
			}
		}
	}

	return 0;
}
