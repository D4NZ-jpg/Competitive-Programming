// Problem: A. Vika and Her Friends
// Contest: Codeforces - Codeforces Round 885 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1848/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 17-02-2024 23:29:56
// Duration: 0:22:30
// End: 2024-02-17 23:52:26
// Rating: 900
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
	ll n, m, k, x, y;
	cin >> n >> m >> k >> x >> y;

	bool ans = true;
	for (int i = 0; i < k; i++) {
		ll a, b;
		cin >> a >> b;
		if ((x + y) % 2 == (a + b) % 2) ans = false;
	}

	return ans;
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
