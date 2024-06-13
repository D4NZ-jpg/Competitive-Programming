// Problem: B. Monsters Attack!
// Contest: Codeforces - Educational Codeforces Round 162 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1923/B
// Memory Limit: 256 MB
// Time Limit: 2500 ms
// Start: 23-02-2024 08:52:39
// Duration: 0:18:10
// End: 2024-02-23 09:10:49
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
bool solve() {
	ll n, k;
	cin >> n >> k;

	vector<ll> v(n + 1), h(n + 1);

	// Health
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v[i] = x;
	}

	// Pos
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		h[abs(x)] += v[i];
	}

	ll atk = 0;
	for (int i = 1; i <= n; i++) {
		atk += k;
		if (h[i] > atk) return false;

		atk -= h[i];
	}

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
