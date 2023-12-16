// Problem: C. Medium Design
// Contest: Codeforces - Codeforces Round 904 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1884/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 13-12-2023 12:53:45
// Duration: 1:54:23
// End: 2023-12-13 14:48:08
// Rating: 1700
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
		ll n, m;
		cin >> n >> m;
		vector<pair<ll, char>> a, b;

		for (int i = 0; i < n; i++) {
			pair<ll, char> x, y;
			cin >> x.first;
			x.second = 'l';
			cin >> y.first;
			y.second = 'r';

			if (x.first != 1) {
				a.pb(x);
				a.pb(y);
			}
			if (y.first != m) {
				b.pb(x);
				b.pb(y);
			}
		}
		sort(all(a));
		sort(all(b));

		ll ans = 0;

		// without l = 1;
		{
			ll t = 0;
			for (auto& i : a) {
				if (i.second == 'l') t++;
				else
					t--;
				ans = max(ans, t);
			}
		}

		// without r = m;
		{
			ll t = 0;
			for (auto& i : b) {
				if (i.second == 'l') t++;
				else
					t--;
				ans = max(ans, t);
			}
		}

		cout << ans << endl;
	}
	return 0;
}
/*

6 26
5 17
2 3
20 21
1 22
12 24



  
                        xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
        xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx       xxxxx
  xxx     xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27
*/
