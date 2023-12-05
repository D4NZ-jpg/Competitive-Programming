// Problem: A. Rudolph and Cut the Rope
// Contest: Codeforces - Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1846/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 05-12-2023 08:05:04
// Duration: 0:04:22
// End: 2023-12-05 08:09:26
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;

		ll cnt = 0;
		for (int i = 0; i < n; i++)

		{
			ll a, b;
			cin >> a >> b;
			if (a - b > 0) cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}
