// Problem: A. Stair, Peak, or Neither?
// Contest: Codeforces - Codeforces Round 937 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1950/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 01-04-2024 12:49:39
// Duration: 0:01:34
// End: 2024-04-01 12:51:13
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
		ll a, b, c;
		cin >> a >> b >> c;
		if (a < b && b < c) cout << "STAIR" << endl;
		else if (a < b && b > c)
			cout << "PEAK" << endl;
		else
			cout << "NONE" << endl;
	}

	return 0;
}
