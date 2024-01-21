// Problem: B. Array Cancellation
// Contest: Codeforces - Codeforces Round 668 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1405/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 17-01-2024 10:19:57
// Duration: 0:01:41
// End: 2024-01-17 10:21:38
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

		ll cnt = 0;
		for (auto& i : v) {
			if (i > 0) cnt += i;
			else
				cnt -= min(abs(i), cnt);
		}
		cout << cnt << endl;
	}

	return 0;
}
