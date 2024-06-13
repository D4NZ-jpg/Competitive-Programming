// Problem: C. No Prime Differences
// Contest: Codeforces - Codeforces Round 877 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1838/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-03-2024 20:03:45
// Duration: 0:57:07
// End: 2024-03-18 21:00:52
// Rating: 1400
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

void solve() {
	ll r, c;
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			cout << (i % 2 ? i / 2 * c + j + 1
			               : (r + i) / 2 * c + j + 1)
			     << ' ';
		cout << endl;
	}
	cout << endl;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) solve();

	return 0;
}
