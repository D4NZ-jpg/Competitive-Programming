// Problem: A. Cover in Water
// Contest: Codeforces - Codeforces Round 911 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1900/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 26-11-2023 08:35:14
// Duration: 0:03:53
// End: 2023-11-26 08:39:07
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
		ll n;
		cin >> n;
		vector<char> c(n);
		for (auto& i : c) cin >> i;

		bool x = false;
		for (int i = 0; i + 2 < n; i++)
			if (c[i] == '.' && c[i + 1] == '.' && c[i + 2] == '.') {
				x = true;
				break;
			}

		if (x) {
			cout << 2 << endl;
			continue;
		}

		ll ans = 0;
		for (char& i : c) ans += i == '.';

		cout << ans << endl;
	}

	return 0;
}
