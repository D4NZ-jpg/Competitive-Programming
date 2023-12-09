// Problem: C. Removal of Unattractive Pairs
// Contest: Codeforces - Codeforces Round 913 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1907/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-12-2023 10:32:15
// Duration: 0:03:03
// End: 2023-12-06 10:35:18
// Rating: 1100
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
		string s;
		ll     n;
		cin >> n >> s;

		vector<ll> v(26);
		for (char& c : s) v[c - 'a']++;

		ll maxE = 0;
		for (ll& i : v) maxE = max(maxE, i);

		if (maxE > n / 2) cout << 2 * maxE - n << endl;
		else
			cout << n % 2 << endl;
	}

	return 0;
}
