// Problem: D. Row Major
// Contest: Codeforces - Codeforces Round 884 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1844/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 22-12-2023 12:13:00
// Duration: 0:44:11
// End: 2023-12-22 12:57:11
// Rating: 1400
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

		ll x = 2;
		while (!(n % x) && x <= n) x++;
		for (int i = 0; i < n; i++) cout << char((i % x) + 'a');
		cout << endl;
	}

	return 0;
}
