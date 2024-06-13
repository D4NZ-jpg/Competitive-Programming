// Problem: A. Farmer John's Challenge
// Contest: Codeforces - CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1942/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-03-2024 08:41:32
// Duration: 0:06:08
// End: 2024-03-30 08:47:40
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
		ll n, k;
		cin >> n >> k;

		if (k == 1) {
			for (int i = 1; i <= n; i++) cout << i << ' ';
			cout << endl;
		} else if (k != n)
			cout << -1 << endl;
		else {
			for (int i = 1; i <= n; i++) cout << 1 << ' ';
			cout << endl;
		}
	}

	return 0;
}
