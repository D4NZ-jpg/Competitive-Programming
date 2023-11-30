// Problem: A. Halloumi Boxes
// Contest: Codeforces - Codeforces Round 912 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1903/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-11-2023 10:38:38
// Duration: 0:02:00
// End: 2023-11-30 10:40:38
// Rating: None
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

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
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for (ll& i : v) cin >> i;

		bool sorted = true;
		for (int i = 1; i < n; i++)
			if (v[i] < v[i - 1]) sorted = false;

		cout << (k > 1 || sorted ? "YES" : "NO") << endl;
	}

	return 0;
}
