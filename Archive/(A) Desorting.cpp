// Problem: A. Desorting
// Contest: Codeforces - Codeforces Round 887 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1853/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 28-12-2023 22:16:28
// Duration: 0:03:24
// End: 2023-12-28 22:19:52
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

		ll best = INT_MAX;
		for (int i = 1; i < n; i++)
			best = min(best, v[i] - v[i - 1] + 1);

		best = max(best, 0ll);
		cout << (best + 1) / 2 << endl;
	}

	return 0;
}
