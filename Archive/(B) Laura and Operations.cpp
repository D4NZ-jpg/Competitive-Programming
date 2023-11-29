// Problem: B. Laura and Operations
// Contest: Codeforces - Codeforces Round 911 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1900/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 26-11-2023 08:40:44
// Duration: 0:11:26
// End: 2023-11-26 08:52:10
// Rating: None
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
		ll a, b, c;
		cin >> a >> b >> c;

		cout << !((b + c) % 2) << ' ' << !((a + c) % 2) << ' '
		     << !((a + b) % 2) << endl;
	}

	return 0;
}
