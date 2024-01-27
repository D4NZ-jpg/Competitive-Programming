// Problem: C. Sending Messages
// Contest: Codeforces - Codeforces Round 920 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1921/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 26-01-2024 19:47:36
// Duration: 0:20:12
// End: 2024-01-26 20:07:48
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll n, f, a, b;
		cin >> n >> f >> a >> b;

		ll last = 0, cost = 0;
		for (int i = 0; i < n; i++) {
			ll t;
			cin >> t;
			cost += min(b, (t - last) * a);
			last = t;
		}

		cout << (f > cost ? "YES" : "NO") << endl;
	}
	return 0;
}
