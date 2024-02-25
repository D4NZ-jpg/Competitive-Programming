// Problem: B. Sasha and the Drawing
// Contest: Codeforces - Codeforces Round 926 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1929/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 15-02-2024 08:48:43
// Duration: 0:38:34
// End: 2024-02-15 09:27:17
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
	ll n, k;
	cin >> n >> k;

	if (k == 4 * n - 2) return 2 * n;
	if (!(k % 2)) return k / 2;
	return (k + 1) / 2;
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
