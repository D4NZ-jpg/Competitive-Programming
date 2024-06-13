// Problem: A. Dual Trigger
// Contest: Codeforces - Codeforces Global Round 25
// URL: https://codeforces.com/problemset/problem/1951/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-04-2024 08:35:07
// Duration: 0:23:42
// End: 2024-04-06 08:58:49
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
		ll     n;
		string s;
		cin >> n >> s;

		bool nt  = false;
		ll   cnt = s[n - 1] == '1';

		for (int i = 0; i + 1 < n; i++)
			nt = nt || (s[i] == '1' && s[i + 1] == '1'),
			cnt += s[i] == '1';

		if (cnt % 2 || (n == 2 && cnt) || (cnt == 2 && nt))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
