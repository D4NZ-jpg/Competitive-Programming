// Problem: B. Rudolf and 121
// Contest: Codeforces - Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1941/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-03-2024 21:44:23
// Duration: 0:04:55
// End: 2024-03-15 21:49:18
// Rating: 1000
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

bool solve() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (auto& i : v) cin >> i;

	for (int i = 0; i + 2 < n; i++) {
		if (v[i] < 0) return false;

		v[i + 1] -= 2 * v[i];
		v[i + 2] -= v[i];
		v[i] = 0;
	}

	for (ll& i : v)
		if (i) return false;

	return true;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << (solve() ? "YES" : "NO") << endl;

	return 0;
}
