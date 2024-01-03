// Problem: D. Unnatural Language Processing
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1915/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 29-12-2023 22:48:24
// Duration: 0:11:26
// End: 2023-12-29 22:59:50
// Rating: 900
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
		string s, ans = "";
		cin >> s;
		reverse(all(s));

		string syl = "", tmp = "";
		for (int i = 0; i < n; i++) {
			char curr = (s[i] == 'a' || s[i] == 'e' ? 'V' : 'C');
			syl += curr, tmp += s[i];

			if (syl == "CVC" || syl == "VC") {
				ans += tmp + '.';
				syl = "";
				tmp = "";
			}
		}

		reverse(all(ans));
		for (int i = 1; i < ans.size(); i++) cout << ans[i];
		cout << endl;
	}

	return 0;
}
