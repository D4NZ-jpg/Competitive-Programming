// Problem: A. Game with Integers
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 28-11-2023 17:45:15
// Duration: 0:06:49
// End: 2023-11-28 17:52:04
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
		bool wins = !((n - 1) % 3) || !((n + 1) % 3);

		if (wins) cout << "First" << endl;
		else
			cout << "Second" << endl;
	}
	return 0;
}
