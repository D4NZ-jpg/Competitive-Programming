// Problem: A. Tales of a Sort
// Contest: Codeforces - Codeforces Round 890 (Div. 2) supported by Constructor Institute
// URL: https://codeforces.com/problemset/problem/1856/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 04-01-2024 20:53:25
// Duration: 0:00:17
// End: 2024-01-04 20:53:42
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

	int tc;
	cin >> tc;
	while (tc--) {
		ll ans = 0;
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		for (int i = 1; i < n; i++)
			if (v[i] < v[i - 1]) ans = max(ans, v[i - 1]);
		cout << ans << endl;
	}
	return 0;
}
