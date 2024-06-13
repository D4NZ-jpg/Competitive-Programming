// Problem: C. MEX Game 1
// Contest: Codeforces - Codeforces Round 934 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1944/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 16-03-2024 09:07:55
// Duration: 0:17:16
// End: 2024-03-16 09:25:11
// Rating: 1300
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
	ll n;
	cin >> n;
	vector<ll> v(n);

	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v[x]++;
	}

	bool passedFirst = false;
	for (int i = 0; i < n; i++) {
		if (!v[i]) return i;
		if (v[i] == 1 && passedFirst) return i;
		if (v[i] == 1) passedFirst = true;
	}
	return (n + 1) / 2;
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
