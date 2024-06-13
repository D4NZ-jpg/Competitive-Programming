// Problem: A. Median of an Array
// Contest: Codeforces - Codeforces Round 936 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1946/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 22-03-2024 08:35:19
// Duration: 0:06:54
// End: 2024-03-22 08:42:13
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

		ll ans = 1;
		v[(n + 1) / 2 - 1]++;
		for (int i = (n + 1) / 2; i < n; i++)
			if (v[i - 1] > v[i])
				ans += v[i - 1] - v[i], v[i] = v[i - 1];

		cout << ans << endl;
	}

	return 0;
}
