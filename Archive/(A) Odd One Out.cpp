// Problem: A. Odd One Out
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1915/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 29-12-2023 22:40:06
// Duration: 0:01:17
// End: 2023-12-29 22:41:23
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
		map<int, int> m;
		for (int i = 0; i < 3; i++) {
			ll j;
			cin >> j;
			m[j]++;
		}

		for (auto& i : m)
			if (i.second == 1) cout << i.first << endl;
	}

	return 0;
}
