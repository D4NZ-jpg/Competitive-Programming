// Problem: B. Vika and the Bridge
// Contest: Codeforces - Codeforces Round 885 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1848/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-02-2024 00:00:35
// Duration: 0:44:54
// End: 2024-02-18 00:45:29
// Rating: 1200
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

ll solve() {
	ll n, k;
	cin >> n >> k;

	vector<ll> c(n), last(k, -1), mst(k), mst2(k);
	for (auto& i : c) cin >> i;

	for (int i = 0; i < n; i++) {
		ll x    = c[i] - 1;
		ll step = i - last[x];
		if (step > mst[x]) {
			mst2[x] = mst[x];
			mst[x]  = step;
		} else if (step > mst2[x])
			mst2[x] = step;

		last[x] = i;
	}

	for (int i = 0; i < k; i++) {
		ll step = n - last[i];
		if (step > mst[i]) {
			mst2[i] = mst[i];
			mst[i]  = step;
		} else if (step > mst2[i])
			mst2[i] = step;
	}

	ll ans = 99999999999;
	for (int i = 0; i < k; i++)
		ans = min(ans, max((mst[i] + 1) / 2, mst2[i]));

	return ans - 1;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
