// Problem: A. Rating Increase
// Contest: Codeforces - Educational Codeforces Round 160 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1913/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-12-2023 19:55:14
// Duration: 0:09:20
// End: 2023-12-18 20:04:34
// Rating: None
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
		string s;
		cin >> s;

		ll idx = 1;
		while (idx < s.size() && s[idx] == '0') idx++;

		string a = "", b = "";
		for (int i = 0; i < s.size(); i++)
			if (i < idx) a += s[i];
			else
				b += s[i];

		ll x = atoll(a.c_str()), y = atoll(b.c_str());
		if (x >= y || !x || !y) cout << -1 << endl;
		else
			cout << x << ' ' << y << endl;
	}

	return 0;
}
