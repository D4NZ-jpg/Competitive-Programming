// Problem: E. Queue Sort
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 28-11-2023 19:18:15
// Duration: 0:20:57
// End: 2023-11-28 19:39:12
// Rating: 1300
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
		vector<ll> v(n);
		for (ll& i : v) cin >> i;
		ll g2 = n - 1;
		while (v[g2 - 1] <= v[g2] && g2 > 0) g2--;

		bool possible = true;
		for (int i = 0; i < g2 && possible; i++)
			if (v[i] <= v[g2]) possible = false;

		if (possible) cout << g2 << endl;
		else
			cout << -1 << endl;
	}

	return 0;
}
