// Problem: A. Distinct Buttons
// Contest: Codeforces - Pinely Round 3 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1909/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 27-12-2023 18:26:41
// Duration: 0:20:07
// End: 2023-12-27 18:46:48
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
		bool quads[4] = {false, false, false, false};  // U B L R

		while (n--) {
			ll x, y;
			cin >> x >> y;
			if (x > 0) quads[3] = true;
			if (x < 0) quads[2] = true;
			if (y > 0) quads[0] = true;
			if (y < 0) quads[1] = true;
		}
		ll ans = 0;
		for (int i = 0; i < 4; i++) ans += quads[i];

		cout << (ans < 4 ? "YES" : "NO") << endl;
	}
	return 0;
}
