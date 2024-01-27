// Problem: A. Vanya and Fence
// Contest: Codeforces - Codeforces Round 355 (Div. 2)
// URL: https://codeforces.com/problemset/problem/677/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 23-01-2024 23:15:17
// Duration: 0:03:58
// End: 2024-01-23 23:19:15
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

	ll n, h, ans = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		if (j > h) ans += 2;
		else
			ans++;
	}

	cout << ans << endl;

	return 0;
}
