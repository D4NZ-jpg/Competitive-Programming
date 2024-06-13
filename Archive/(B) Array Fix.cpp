// Problem: B. Array Fix
// Contest: Codeforces - Educational Codeforces Round 163 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1948/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-03-2024 08:46:47
// Duration: 0:08:25
// End: 2024-03-15 08:55:12
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
	ll n;
	cin >> n;

	vector<ll> v(n);
	for (auto& i : v) cin >> i;

	reverse(all(v));
	ll last = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] <= last) {
			last = v[i];
			continue;
		}

		// try sep
		string num = to_string(v[i]);
		reverse(all(num));
		for (char& c : num) {
			ll x = c - '0';
			if (x > last) return false;
			last = x;
		}
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
