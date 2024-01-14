// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round 163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 12-01-2024 15:02:27
// Duration: 0:01:15
// End: 2024-01-12 15:03:42
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
	string s;
	cin >> s;

	ll ans = 0;
	for (int i = 1; i < n; i++) ans += s[i - 1] == s[i];
	cout << ans;

	return 0;
}
