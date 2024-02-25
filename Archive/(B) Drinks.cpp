// Problem: B. Drinks
// Contest: Codeforces - Codeforces Round 126 (Div. 2)
// URL: https://codeforces.com/problemset/problem/200/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 30-01-2024 22:47:47
// Duration: 0:03:39
// End: 2024-01-30 22:51:26
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

	ll n;
	cin >> n;

	double ans = 0;
	for (int i = 0; i < n; i++) {
		double j;
		cin >> j;
		ans += j;
	}

	cout << fixed << setprecision(12) << ans / n;

	return 0;
}
