// Problem: A. Too Min Too Max
// Contest: Codeforces - Codeforces Round 931 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1934/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 15-05-2024 15:53:16
// Duration: 0:04:48
// End: 2024-05-15 15:58:04
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

		ll i = 0, k = 1, j = n - 1, l = n - 2;

		cout << abs(v[i] - v[j]) + abs(v[j] - v[k]) + abs(v[k] - v[l])
		          + abs(v[l] - v[i])
		     << endl;
	}

	return 0;
}
