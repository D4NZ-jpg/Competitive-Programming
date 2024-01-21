// Problem: A. Elephant
// Contest: Codeforces - Codeforces Round 340 (Div. 2)
// URL: https://codeforces.com/problemset/problem/617/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-01-2024 22:37:40
// Duration: 0:02:42
// End: 2024-01-16 22:40:22
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

	ll n, ans = 0;
	cin >> n;

	for (int i = 5; i; i--) ans += n / i, n %= i;
	cout << ans;

	return 0;
}
