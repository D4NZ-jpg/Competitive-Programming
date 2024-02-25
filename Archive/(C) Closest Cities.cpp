// Problem: C. Closest Cities
// Contest: Codeforces - Educational Codeforces Round 161 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1922/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 08-02-2024 21:35:39
// Duration: 0:09:47
// End: 2024-02-08 21:45:26
// Rating: 1300
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

		vector<ll>   v(n), r(n), l(n);
		vector<char> dir(n);
		for (auto& i : v) cin >> i;
		dir[0] = 'r', dir[n - 1] = 'l';

		for (int i = 1; i < n - 1; i++) {
			ll dl = v[i] - v[i - 1], dr = v[i + 1] - v[i];
			if (dl < dr) dir[i] = 'l';
			else
				dir[i] = 'r';
		}

		for (int i = 1; i < n; i++)
			r[i] = r[i - 1]
			       + (dir[i - 1] == 'r' ? 1 : abs(v[i - 1] - v[i]));
		for (int i = n - 2; i >= 0; i--)
			l[i] = l[i + 1]
			       + (dir[i + 1] == 'l' ? 1 : abs(v[i + 1] - v[i]));

		ll q;
		cin >> q;
		while (q--) {
			ll a, b;
			cin >> a >> b;
			if (a < b)
				cout << r[b - 1] - (a == 1 ? 0 : r[a - 1]) << endl;
			else
				cout << l[b - 1] - (a == 1 ? 0 : l[a - 1]) << endl;
		}
	}

	return 0;
}
