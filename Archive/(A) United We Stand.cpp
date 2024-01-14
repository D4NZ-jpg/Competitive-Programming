// Problem: A. United We Stand
// Contest: Codeforces - Codeforces Round 892 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1859/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 09-01-2024 08:25:09
// Duration: 0:13:00
// End: 2024-01-09 08:38:09
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
		vector<ll> v(n), b, c;
		for (auto& i : v) cin >> i;

		ll   minE = *min_element(all(v));
		bool ans  = true;
		for (ll& i : v) {
			if (i == minE) b.pb(i);
			else
				c.pb(i), ans = ans && minE % i;
		}

		ans = ans && b.size() && c.size();
		if (!ans) {
			cout << -1 << endl;
			continue;
		}

		cout << b.size() << ' ' << c.size() << endl;
		for (ll& i : b) cout << i << ' ';
		cout << endl;
		for (ll& i : c) cout << i << ' ';
		cout << endl;
	}
	return 0;
}
