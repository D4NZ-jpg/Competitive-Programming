// Problem: B. Not Quite Latin Square
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1915/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 29-12-2023 22:41:55
// Duration: 0:02:45
// End: 2023-12-29 22:44:40
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
		for (int i = 0; i < 3; i++) {
			ll sum = 0, trgt = 6;

			char c;
			for (int j = 0; j < 3; j++) {
				cin >> c;
				if (c == '?') continue;
				sum += c - 'A' + 1;
			}

			if (sum == trgt) continue;

			cout << char(trgt - sum - 1 + 'A') << endl;
		}
	}
	return 0;
}
