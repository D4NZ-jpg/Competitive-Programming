// Problem: A. Wallet Exchange
// Contest: Codeforces - Hello 2024
// URL: https://codeforces.com/problemset/problem/1919/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-01-2024 08:35:13
// Duration: 0:02:57
// End: 2024-01-06 08:38:10
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
		ll a, b;
		cin >> a >> b;

		if ((a + b) % 2) cout << "Alice" << endl;
		else
			cout << "Bob" << endl;
	}

	return 0;
}
