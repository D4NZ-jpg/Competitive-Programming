// Problem: A. Bear and Big Brother
// Contest: Codeforces - Codeforces Round 405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// URL: https://codeforces.com/problemset/problem/791/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 14-01-2024 20:52:46
// Duration: 0:02:26
// End: 2024-01-14 20:55:12
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

	ll a, b, ans = 0;
	cin >> a >> b;

	while (a <= b) ans++, a *= 3, b *= 2;
	cout << ans;
	return 0;
}
