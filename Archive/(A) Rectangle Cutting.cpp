// Problem: A. Rectangle Cutting
// Contest: Codeforces - Codeforces Round 924 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1928/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-02-2024 20:24:58
// Duration: 0:04:27
// End: 2024-02-16 20:29:25
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

bool solve(ll a, ll b) {
	if (b % 2) return false;

	return b / 2 != a;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll a, b;
		cin >> a >> b;

		cout << (solve(a, b) || solve(b, a) ? "Yes" : "No") << endl;
	}

	return 0;
}
