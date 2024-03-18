// Problem: C. Binary String Reconstruction
// Contest: Codeforces - Educational Codeforces Round 94 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1400/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 11-03-2024 18:46:19
// Duration: 0:02:36
// End: 2024-03-11 18:48:55
// Rating: 1500
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

string solve() {
	string s;
	ll     x;
	cin >> s >> x;

	vector<char> ans(s.size(), '1');

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '0') continue;

		if (i >= x) ans[i - x] = '0';
		if (i + x < s.size()) ans[i + x] = '0';
	}

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '1') continue;

		ll cnt = 0;
		if (i >= x) cnt += ans[i - x] == '1';
		if (i + x < s.size()) cnt += ans[i + x] == '1';

		if (!cnt) return "-1";
	}
	return string(all(ans));
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
