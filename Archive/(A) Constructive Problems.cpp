// Problem: A. Constructive Problems
// Contest: Codeforces - Codeforces Round 915 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1905/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-12-2023 08:35:17
// Duration: 0:02:18
// End: 2023-12-16 08:37:35
// Rating: None
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
		ll n, m;
		cin >> n >> m;

		cout << max(n, m) << endl;
	}

	return 0;
}
