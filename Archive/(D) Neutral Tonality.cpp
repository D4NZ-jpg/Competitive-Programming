// Problem: D. Neutral Tonality
// Contest: Codeforces - Codeforces Round 908 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1894/D
// Memory Limit: 512 MB
// Time Limit: 3000 ms
// Start: 17-11-2023 12:24:22
// Duration: 2:35:15
// End: 2023-11-17 14:59:37
// Rating: 1700
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
		ll n, m;
		cin >> n >> m;
		vector<ll> a(n), b(m);
		for (ll& i : a) cin >> i;
		for (ll& i : b) cin >> i;

		sort(all(b), greater<ll>());
		ll l = 0, r = 0;
		while (l < n && r < m) {
			if (a[l] > b[r]) cout << a[l++] << ' ';
			else
				cout << b[r++] << ' ';
		}

		while (l < n) cout << a[l++] << ' ';
		while (r < m) cout << b[r++] << ' ';
		cout << endl;
	}

	return 0;
}
