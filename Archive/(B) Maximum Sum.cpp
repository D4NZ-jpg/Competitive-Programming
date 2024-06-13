// Problem: B. Maximum Sum
// Contest: Codeforces - Codeforces Round 936 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1946/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 22-03-2024 08:42:26
// Duration: 0:09:55
// End: 2024-03-22 08:52:21
// Rating: 1100
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
#define MOD       1000000007

ll solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	for (auto& i : v) cin >> i;

	// find max subarray
	ll best = 0, curr = 0;
	for (int i = 0; i < n; i++) {
		curr += v[i];
		if (curr < 0) curr = 0;
		best = max(best, curr);
	}

	ll ans = 0;
	for (auto& i : v) ans = (ans + i + MOD) % MOD;

	while (k--)
		ans = (MOD + ans + best) % MOD, best = (2 * best) % MOD;

	return ans;
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
