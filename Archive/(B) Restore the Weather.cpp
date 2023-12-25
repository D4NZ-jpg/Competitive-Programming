// Problem: B. Restore the Weather
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1833/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-12-2023 09:39:09
// Duration: 0:22:57
// End: 2023-12-20 10:02:06
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
		ll n, k;
		cin >> n >> k;
		vector<pll> a(n);
		vector<ll>  b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i].first;
			a[i].second = i;
		}
		for (auto& i : b) cin >> i;

		sort(all(a));
		sort(all(b));

		vector<ll> ans(n);
		for (int i = 0; i < n; i++) ans[a[i].second] = b[i];
		for (ll& i : ans) cout << i << ' ';
		cout << endl;
	}

	return 0;
}
