// Problem: A. Rudolf and the Ticket
// Contest: Codeforces - Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1941/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 15-03-2024 21:39:50
// Duration: 0:04:35
// End: 2024-03-15 21:44:25
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

ll solve() {
	ll n, m, k;
	cin >> n >> m >> k;

	vector<ll> a(n), b(m);
	for (auto& i : a) cin >> i;
	for (auto& i : b) cin >> i;

	sort(all(b));
	ll nums = 0;
	for (int i = 0; i < n; i++) {
		ll x = k - a[i];
		if (x <= 0) continue;

		auto it = upper_bound(all(b), x);
		nums += it - b.begin();
	}
	return nums;
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
