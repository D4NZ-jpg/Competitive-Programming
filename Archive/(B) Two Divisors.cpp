// Problem: B. Two Divisors
// Contest: Codeforces - Good Bye 2023
// URL: https://codeforces.com/problemset/problem/1916/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-12-2023 08:55:29
// Duration: 0:46:03
// End: 2023-12-30 09:41:32
// Rating: 900
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

ll solve() {
	ll a, b;
	cin >> a >> b;

	if (a == 1) return b * b;

	ll x = gcd(a, b);

	if (a * b / x > b) return a * b / x;

	for (int i = 2; i * i <= b; i++)
		if (!(b % i)) return b * i;
		else if (i <= a && !(a % i))
			return b * i;

	return b * b;
}
int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
