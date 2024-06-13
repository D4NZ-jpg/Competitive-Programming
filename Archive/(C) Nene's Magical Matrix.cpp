// Problem: C. Nene's Magical Matrix
// Contest: Codeforces - Codeforces Round 939 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1956/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 25-04-2024 23:48:33
// Duration: 16:50:37
// End: 2024-04-26 16:39:10
// Rating: 1600
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

		ll total = 0;
		for (int i = 1; i <= n; i++)
			total += (i * i * i) - (i - 1) * (i - 1) * i;

		cout << total << ' ' << 2 * n - 1 << endl;
		cout << "1 1 ";
		for (int i = n; i; i--) cout << i << ' ';
		cout << endl;

		for (int i = 2; i <= n; i++)
			for (int j = 1; j <= 2; j++) {
				cout << j << ' ' << i << ' ';
				for (int k = n; k; k--) cout << k << ' ';
				cout << endl;
			}
	}

	return 0;
}
