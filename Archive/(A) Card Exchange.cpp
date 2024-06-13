// Problem: A. Card Exchange
// Contest: Codeforces - Codeforces Round 941 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1966/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 27-04-2024 08:35:11
// Duration: 1 day, 12:02:43
// End: 2024-04-28 20:37:54
// Rating: 800
#include <bits/stdc++.h>

#include <algorithm>
#include <map>
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
		ll n, k;
		cin >> n >> k;

		vector<ll> m(101);
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			m[x]++;
		}

		sort(all(m), greater<ll>());

		ll out = 0;
		for (int i = 0; i < 101; i++) {
			bool x = m[i] >= k;
			m[i]   = min(m[i], k - 1);

			if (x && i + 1 < 101 && m[i + 1] > 0) m[i + 1] += m[i];
			else
				out += m[i];
		}
		cout << out << endl;
	}

	return 0;
}
