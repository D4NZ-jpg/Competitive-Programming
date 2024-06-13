// Problem: A. Nene's Game
// Contest: Codeforces - Codeforces Round 939 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1956/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-04-2024 08:35:16
// Duration: 0:12:05
// End: 2024-04-13 08:47:21
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll k, q;
		cin >> k >> q;
		vector<ll> a(k);
		for (auto& i : a) cin >> i;
		while (q--) {
			ll n;
			cin >> n;
			cout << min(n, a[0] - 1) << ' ';
		}

		cout << endl;
	}

	return 0;
}
