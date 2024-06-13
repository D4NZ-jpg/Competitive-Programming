// Problem: B. Upscaling
// Contest: Codeforces - Codeforces Round 937 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1950/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 01-04-2024 12:50:54
// Duration: 0:11:04
// End: 2024-04-01 13:01:58
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
		ll n;
		cin >> n;
		for (int i = 0; i < 2 * n; i++) {
			for (int j = 0; j < 2 * n; j++) {
				if (i / 2 % 2) cout << (j / 2 % 2 ? '#' : '.');
				else
					cout << (j / 2 % 2 ? '.' : '#');
			}
			cout << endl;
		}
	}

	return 0;
}
