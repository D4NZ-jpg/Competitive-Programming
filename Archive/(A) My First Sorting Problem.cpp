// Problem: A. My First Sorting Problem
// Contest: Codeforces - Codeforces Round 944 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1971/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-05-2024 16:45:13
// Duration: 0:00:27
// End: 2024-05-16 16:45:40
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
		ll x, y;
		cin >> x >> y;
		cout << min(x, y) << ' ' << max(x, y) << endl;
	}

	return 0;
}
