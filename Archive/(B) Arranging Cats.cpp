// Problem: B. Arranging Cats
// Contest: Codeforces - Codeforces Round 920 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1921/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 26-01-2024 19:26:18
// Duration: 0:20:53
// End: 2024-01-26 19:47:11
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
		ll n;
		cin >> n;

		string s1, s2;
		cin >> s1 >> s2;
		bitset<100010> a(s1), b(s2);

		ll already = (a & b).count();
		ll ans     = a.count();
		ans -= already;
		ans += max(0ll, ll(b.count() - a.count()));
		cout << ans << endl;
	}

	return 0;
}
