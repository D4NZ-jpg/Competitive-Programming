// Problem: C. Clock and Strings
// Contest: Codeforces - Codeforces Round 944 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1971/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-05-2024 17:37:11
// Duration: 0:04:42
// End: 2024-05-16 17:41:53
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
		vector<pair<int, bool>> v(4);
		for (int i = 0; i < 4; i++) {
			cin >> v[i].first;
			v[i].second = i < 2;
		}

		sort(all(v));
		bool x = false;
		for (int i = 0; i < 3 && !x; i++)
			if (v[i].second == v[i + 1].second) x = true;

		cout << (!x ? "YES" : "NO") << endl;
	}

	return 0;
}
