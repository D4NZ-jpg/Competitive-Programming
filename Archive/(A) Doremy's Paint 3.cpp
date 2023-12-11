// Problem: A. Doremy's Paint 3
// Contest: Codeforces - Codeforces Round 906 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1890/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 09-12-2023 20:20:27
// Duration: 0:08:03
// End: 2023-12-09 20:28:30
// Rating: 800
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

bool solve(vector<ll>& v) {
	map<ll, ll> m;
	for (ll& i : v) m[i]++;

	ll max_count = 0;
	for (auto& i : m) max_count = max(i.second, max_count);

	if (m.size() == 1) return true;
	return m.size() <= 2
	       && (max_count == v.size() / 2
	           || max_count == (v.size() + 1) / 2);
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		cout << (solve(v) ? "YES" : "NO") << endl;
	}

	return 0;
}
