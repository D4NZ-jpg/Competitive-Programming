// Problem: A. Ultra-Fast Mathematician
// Contest: Codeforces - Codeforces Beta Round 57 (Div. 2)
// URL: https://codeforces.com/problemset/problem/61/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 01-02-2024 20:16:20
// Duration: 0:14:54
// End: 2024-02-01 20:31:14
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

	string x, y;
	cin >> x >> y;
	bitset<150> a(x), b(y), ans;

	ans = (a ^ b);

	for (int i = x.size() - 1; i >= 0; i--) cout << ans[i];

	return 0;
}
