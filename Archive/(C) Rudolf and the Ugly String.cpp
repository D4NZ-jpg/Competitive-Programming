// Problem: C. Rudolf and the Ugly String
// Contest: Codeforces - Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1941/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 15-03-2024 21:49:17
// Duration: 0:06:27
// End: 2024-03-15 21:55:44
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

ll solve() {
	ll n;
	cin >> n;

	string s;
	cin >> s;

	ll cnt = 0;
	for (int i = 0; i + 2 < n; i++) {
		if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p'
		    && s[i + 3] == 'i' && s[i + 4] == 'e')
			cnt++, i += 4;

		if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') cnt++;
		if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') cnt++;
	}

	return cnt;
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
