// Problem: A. Magnets
// Contest: Codeforces - Codeforces Round 200 (Div. 2)
// URL: https://codeforces.com/problemset/problem/344/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 28-01-2024 21:24:27
// Duration: 0:03:19
// End: 2024-01-28 21:27:46
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

	ll n, ans = 0;
	cin >> n;
	char last = '.';

	for (int i = 0; i < n; i++) {
		ll d;
		cin >> d;

		if (d == 10) {
			if (last != '+') ans++;
			last = '+';
		} else {
			if (last != '-') ans++;
			last = '-';
		}
	}
	cout << ans;

	return 0;
}
