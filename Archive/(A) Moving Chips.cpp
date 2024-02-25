// Problem: A. Moving Chips
// Contest: Codeforces - Educational Codeforces Round 162 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1923/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 23-02-2024 08:44:22
// Duration: 0:05:23
// End: 2024-02-23 08:49:45
// Rating: None
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

		bool started = false;
		ll   zeros = 0, ans = 0;
		for (int i = 0; i < n; i++) {
			bool x;
			cin >> x;
			if (x) started = true;
			if (!started) continue;

			if (x) ans = zeros;
			else
				zeros++;
		}
		cout << ans << endl;
	}

	return 0;
}
