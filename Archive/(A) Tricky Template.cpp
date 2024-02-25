// Problem: A. Tricky Template
// Contest: Codeforces - Educational Codeforces Round 161 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1922/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 05-02-2024 22:17:51
// Duration: 0:18:22
// End: 2024-02-05 22:36:13
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

bool solve() {
	ll n;
	cin >> n;
	string a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < n; i++)
		if (a[i] != c[i] && b[i] != c[i]) return true;

	return false;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << (solve() ? "YES" : "NO") << endl;

	return 0;
}
