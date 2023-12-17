// Problem: A. Grasshopper on a Line
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1837/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 16-12-2023 20:18:59
// Duration: 0:03:49
// End: 2023-12-16 20:22:48
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
		ll x, k;
		cin >> x >> k;
		if (x % k) cout << 1 << endl << x << endl;
		else
			cout << 2 << endl << 1 << ' ' << x - 1 << endl;
	}

	return 0;
}
