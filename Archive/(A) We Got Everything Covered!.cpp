// Problem: A. We Got Everything Covered!
// Contest: Codeforces - Codeforces Round 921 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1925/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 09-02-2024 22:30:10
// Duration: 0:07:21
// End: 2024-02-09 22:37:31
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
		ll n, k;
		cin >> n >> k;

		for (int i = 0; i < n * k; i++) cout << char('a' + (i % k));
		cout << endl;
	}
	return 0;
}
