// Problem: A. Square
// Contest: Codeforces - Codeforces Round 920 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1921/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 26-01-2024 19:20:16
// Duration: 0:17:51
// End: 2024-01-26 19:38:07
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
		set<ll> x, y;
		for (int i = 0; i < 4; i++) {
			ll a, b;
			cin >> a >> b;
			x.insert(a);
			y.insert(b);
		}

		cout << (*++x.begin() - *x.begin())
		          * (*++y.begin() - *y.begin())
		     << endl;
	}

	return 0;
}
