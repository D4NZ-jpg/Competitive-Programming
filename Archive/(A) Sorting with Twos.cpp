// Problem: A. Sorting with Twos
// Contest: Codeforces - Codeforces Round 907 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1891/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 05-01-2024 21:32:08
// Duration: 0:21:08
// End: 2024-01-05 21:53:16
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

		bool sorted = true;
		ll   i      = 2;
		for (; i * 2 <= n; i *= 2) {
			for (int j = i + 1; j < i * 2; j++)
				sorted = sorted && v[j] >= v[j - 1];
		}
		for (int j = i + 1; j < n; j++)
			sorted = sorted && v[j] >= v[j - 1];

		cout << (sorted ? "YES" : "NO") << endl;
	}

	return 0;
}
