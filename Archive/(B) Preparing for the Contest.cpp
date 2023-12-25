// Problem: B. Preparing for the Contest
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 19-12-2023 16:48:00
// Duration: 0:04:39
// End: 2023-12-19 16:52:39
// Rating: None
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
		ll n, k;
		cin >> n >> k;

		for (int i = 1; i <= k; i++) cout << i << ' ';
		for (int i = n; i > k; i--) cout << i << ' ';
		cout << endl;
	}

	return 0;
}
