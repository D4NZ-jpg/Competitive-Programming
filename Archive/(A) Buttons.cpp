// Problem: A. Buttons
// Contest: Codeforces - Codeforces Round 893 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1858/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 31-12-2023 15:02:47
// Duration: 0:07:59
// End: 2023-12-31 15:10:46
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

		if (c % 2) {
			if (b > a) cout << "Second" << endl;
			else
				cout << "First" << endl;
		} else {
			if (a > b) cout << "First" << endl;
			else
				cout << "Second" << endl;
		}
	}
	return 0;
}
