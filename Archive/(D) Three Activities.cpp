// Problem: D. Three Activities
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 19-12-2023 17:10:58
// Duration: 0:11:46
// End: 2023-12-19 17:22:44
// Rating: 1200
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

ll notEqual(vector<pll>& a, vector<pll>& b, vector<pll>& c, ll x,
            ll y, ll z) {
	return a[x].second != b[y].second && a[x].second != c[z].second
	       && b[y].second != c[z].second;
}

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

		vector<pll> a(n), b(n), c(n);

		for (int i = 0; i < n; i++)
			cin >> a[i].first, a[i].second = i;
		for (int i = 0; i < n; i++)
			cin >> b[i].first, b[i].second = i;
		for (int i = 0; i < n; i++)
			cin >> c[i].first, c[i].second = i;

		sort(all(a));
		sort(all(b));
		sort(all(c));

		ll curr = 0;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				for (int k = 0; k < 3; k++) {
					ll x = n - i - 1, y = n - j - 1, z = n - k - 1;
					ll sum = a[x].first + b[y].first + c[z].first;

					if (sum > curr && notEqual(a, b, c, x, y, z))
						curr = sum;
				}

		cout << curr << endl;
	}

	return 0;
}
