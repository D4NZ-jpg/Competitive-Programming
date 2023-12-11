// Problem: C. Matching Arrays
// Contest: Codeforces - CodeTON Round 7 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1896/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 10-12-2023 11:36:26
// Duration: 0:39:30
// End: 2023-12-10 12:15:56
// Rating: 1400
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
		ll n, x;
		cin >> n >> x;
		vector<ll>  b(n), ans(n, -1);
		vector<pll> a(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i].first;
			a[i].second = i;
		}
		for (auto& i : b) cin >> i;

		sort(all(a));
		sort(all(b));

		ll score = 0;
		ll l = 0, r = x % n;
		while (l < n) {
			ans[a[l].second] = b[r];
			if (a[l].first > b[r]) score++;
			l++, r = (r + 1) % n;
		}

		if (score == x) {
			cout << "YES" << endl;
			for (ll& i : ans) cout << i << ' ';
			cout << endl;
		} else
			cout << "NO" << endl;
	}
	return 0;
}
