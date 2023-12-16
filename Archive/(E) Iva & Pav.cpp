// Problem: E. Iva & Pav
// Contest: Codeforces - Codeforces Round 900 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1878/E
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// Start: 15-12-2023 13:02:10
// Duration: 0:42:29
// End: 2023-12-15 13:44:39
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

ll check(ll l, ll r, vector<vector<ll>>& v, ll n) {
	ll ans = 0;

	for (int i = 64; i >= 0; i--) {
		ll cnt = v[r][i] - v[l - 1][i];
		ans <<= 1;
		ans |= cnt == (r - l + 1);
	}

	return ans;
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
		vector<vector<ll>> pref(n + 1, vector<ll>(65));
		for (int i = 1; i <= n; i++) {
			ll curr;
			cin >> curr;

			ll cnt = 0;
			while (curr) {
				pref[i][cnt] = pref[i - 1][cnt] + (curr & 1);
				curr >>= 1;
				cnt++;
			}
		}
		ll q;
		cin >> q;
		while (q--) {
			ll fl, k;
			cin >> fl >> k;

			ll l = fl, r = n;

			while (l < r) {
				ll mid = (l + r + 1) / 2;

				ll num = check(fl, mid, pref, n);
				if (num >= k) l = mid;
				else
					r = mid - 1;
			}

			if (check(fl, r, pref, n) >= k) cout << r << endl;
			else
				cout << -1 << endl;
		}
	}

	return 0;
}
