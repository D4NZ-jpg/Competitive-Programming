// Problem: A. Calculating Function
// Contest: Codeforces - Codeforces Round 277 (Div. 2)
// URL: https://codeforces.com/problemset/problem/486/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 29-01-2024 14:31:30
// Duration: 0:02:40
// End: 2024-01-29 14:34:10
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

	ll ans = (n + 1) / 2;
	if (n % 2) ans *= -1;
	cout << ans << endl;

	return 0;
}
