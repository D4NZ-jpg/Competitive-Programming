// Problem: B. The Corridor or There and Back Again
// Contest: Codeforces - Codeforces Round 895 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1872/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 23-11-2023 17:33:31
// Duration: 0:14:52
// End: 2023-11-23 17:48:23
// Rating: 900
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

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

		vector<pair<ll, ll>> v(n);
		for (auto& i : v) cin >> i.first >> i.second;
		sort(all(v));

		ll t = INT_MAX;

		for (auto& ev : v) t = min(t, ev.first + (ev.second - 1) / 2);

		cout << t << endl;
	}
	return 0;
}
