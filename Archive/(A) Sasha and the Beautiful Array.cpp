// Problem: A. Sasha and the Beautiful Array
// Contest: Codeforces - Codeforces Round 926 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1929/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 15-02-2024 08:42:11
// Duration: 0:03:23
// End: 2024-02-15 08:45:34
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
		ll n;
		cin >> n;

		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		sort(all(v));

		ll ans = 0;
		for (int i = 1; i < n; i++) { ans += v[i] - v[i - 1]; }
		cout << ans << endl;
	}

	return 0;
}
