// Problem: A. Special Characters
// Contest: Codeforces - Educational Codeforces Round 163 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1948/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-03-2024 08:35:55
// Duration: 0:08:40
// End: 2024-03-15 08:44:35
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

void solve() {
	ll n;
	cin >> n;
	if (n % 2) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++) cout << char('A' + (i / 2) % 2);
	cout << endl;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) solve();

	return 0;
}
