// Problem: A. Divisibility Problem
// Contest: Codeforces - Codeforces Round 629 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1328/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 07-02-2024 21:56:44
// Duration: 0:01:53
// End: 2024-02-07 21:58:37
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
		ll a, b;
		cin >> a >> b;
		cout << (a + b - 1) / b * b - a << endl;
	}
	return 0;
}
