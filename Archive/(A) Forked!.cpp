// Problem: A. Forked!
// Contest: Codeforces - Codeforces Round 914 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1904/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 09-12-2023 10:05:13
// Duration: 0:24:16
// End: 2023-12-09 10:29:29
// Rating: 900
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
		ll a, b, kx, ky, qx, qy;
		cin >> a >> b >> kx >> ky >> qx >> qy;

		map<pll, ll> cnt;
		cnt[{kx + a, ky + b}]++;
		cnt[{kx + a, ky - b}]++;
		cnt[{kx - a, ky + b}]++;
		cnt[{kx - a, ky - b}]++;

		cnt[{qx + a, qy + b}]++;
		cnt[{qx + a, qy - b}]++;
		cnt[{qx - a, qy + b}]++;
		cnt[{qx - a, qy - b}]++;

		if (a != b) {
			cnt[{kx + b, ky + a}]++;
			cnt[{kx + b, ky - a}]++;
			cnt[{kx - b, ky + a}]++;
			cnt[{kx - b, ky - a}]++;

			cnt[{qx + b, qy + a}]++;
			cnt[{qx + b, qy - a}]++;
			cnt[{qx - b, qy + a}]++;
			cnt[{qx - b, qy - a}]++;
		}

		ll ans = 0;
		for (auto& i : cnt) {
			cerr << '(' << i.first.first << ", " << i.first.second
			     << "): " << i.second << endl;
			if (i.second >= 2) ans++;
		}
		cerr << endl;
		cout << ans << endl;
	}
	return 0;
}
