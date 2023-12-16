// Problem: C. Torn Lucky Ticket
// Contest: Codeforces - Educational Codeforces Round 157 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1895/C
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 12-12-2023 10:43:34
// Duration: 1:06:55
// End: 2023-12-12 11:50:29
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

ll mem[50][50];

ll cntDig(ll x) {
	ll cnt = 0;
	while (x) {
		cnt++;
		x /= 10;
	}
	return cnt;
}

ll psum(ll x, ll k, bool inv) {
	string s = to_string(x);
	if (inv) reverse(all(s));

	ll sum = 0;
	for (int i = 0; i < k && i < s.size(); i++) sum += s[i] - '0';
	return sum;
}

ll sumDig(ll x) {
	ll sum = 0;
	while (x) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 50; i++)
		for (int j = 0; j < 50; j++) mem[i][j] = 0;

	ll n;
	cin >> n;
	vector<ll> v(n);
	for (ll& i : v) {
		cin >> i;
		mem[cntDig(i)][sumDig(i)]++;
	}

	ll ans = 0;
	for (ll& i : v) {
		ll len = cntDig(i), sum = sumDig(i);

		// fix to left side
		for (int rlen = 1; rlen <= len; rlen++) {
			ll l = rlen + len;
			if (l % 2) continue;

			ll lsum = psum(i, l / 2, false);
			ll rsum = 2 * lsum - sum;

			ans += mem[rlen][rsum];
		}

		// fix to right side
		for (int llen = 1; llen < len; llen++) {
			ll l = llen + len;
			if (l % 2) continue;

			ll rsum = psum(i, l / 2, true);
			ll lsum = 2 * rsum - sum;

			ans += mem[llen][lsum];
		}
	}

	cout << ans << endl;
	return 0;
}
