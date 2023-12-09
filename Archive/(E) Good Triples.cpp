// Problem: E. Good Triples
// Contest: Codeforces - Codeforces Round 913 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1907/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 06-12-2023 15:26:40
// Duration: 0:04:30
// End: 2023-12-06 15:31:10
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
		string s;
		cin >> s;

		ll ans = 1;
		for (char& c : s) {
			ll digit = c - '0';
			cerr << digit;

			ll cnt = 0;
			for (int i = 0; i <= digit; i++)
				for (int j = 0; j <= digit; j++)
					if (i + j <= digit) cnt++;
			ans *= cnt;
		}
		cerr << endl;
		cout << ans << endl;
	}
	return 0;
}
