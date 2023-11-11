// Problem: B. Three Sevens
// Contest: Codeforces - Codeforces Round 860 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1798/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 26-03-2023 08:46:19
// Duration: 0:16:18
// End: 2023-03-26 09:02:37
// Rating: 1000
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int m;
		cin >> m;
		vector<vector<int>> days(m);
		for (int i = 0; i < m; i++) {
			int n;
			cin >> n;
			for (int j = 0; j < n; j++) {
				int x;
				cin >> x;
				days[i].pb(x);
			}
		}

		vector<int> w;
		set<int>    winners;
		bool        l = false;
		for (int i = m - 1; i >= 0; i--) {
			bool p = false;
			for (auto j : days[i]) {
				if (!winners.count(j)) {
					winners.insert(j);
					if (!p) {
						p = true;
						w.pb(j);
					}
				}
			}
			if (!p) l = true;
		}
		if (l) cout << -1;
		else
			for (int i = m - 1; i >= 0; i--) cout << w[i] << ' ';
		cout << '\n';
	}

	return 0;
}

/*

8
2 9
1 4
*/