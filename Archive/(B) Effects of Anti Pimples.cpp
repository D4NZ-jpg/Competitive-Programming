// Problem: B. Effects of Anti Pimples
// Contest: Codeforces - Codeforces Round 902 (Div. 1, based on
// COMPFEST 15 - Final Round) URL: https://codeforces.com/problemset/problem/1876/B Memory Limit: 256
// MB Time Limit: 2000 ms Start: 16-11-2023 11:56:56
// Duration: None
// End: 2023-11-16 13:43:18
// Rating: 1500
// URL: https://codeforces.com/problemset/problem/1876/B
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
#define MOD       998244353

bool add(vector<bool>& vis, ll x) {
	if (!vis[x]) return vis[x] = true;
	return false;
}

ll binpow(ll a, ll b) {
	ll ans = 1;
	while (b) {
		if (b & 1) ans = ans * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}
	return ans % MOD;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n;
	cin >> n;
	vector<pair<ll, ll>> v(n + 1);
	vector<bool>         vis(n + 1);

	v[0] = {INT_MAX, INT_MAX};

	for (int i = 1; i <= n; i++) cin >> v[i].first, v[i].second = i;
	sort(all(v), greater<pair<ll, ll>>());

	ll ans = 0, left = n;
	for (int i = 1; i <= n; i++) {
		ll score = v[i].first, idx = v[i].second, cnt = 0;
		if (vis[idx]) continue;
		for (int j = 1; j <= sqrt(idx); j++) {
			if (idx % j) continue;

			cnt += add(vis, j);
			cnt += add(vis, idx / j);
		}

		left -= cnt;
		ans =
		  (ans
		   + (((binpow(2, cnt) - 1) * binpow(2, left)) % MOD) * score)
		  % MOD;
	}
	cout << ans;

	return 0;
}
