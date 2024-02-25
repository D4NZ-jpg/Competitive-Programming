// Problem: A. Brick Wall
// Contest: Codeforces - Codeforces Round 922 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1918/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 14-02-2024 21:45:00
// Duration: 0:02:28
// End: 2024-02-14 21:47:28
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
		cout << a * (b / 2) << endl;
	}
	return 0;
}
