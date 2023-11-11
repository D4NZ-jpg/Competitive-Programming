// Problem: C. Search in Parallel
// Contest: Codeforces - Educational Codeforces Round 146 (Rated for
// Div. 2) URL: https://codeforces.com/problemset/problem/1814/C
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 23-10-2023 17:41:37
// Duration: 0:32:58
// End: 2023-10-23 18:14:35
// Rating: 1500
// URL: https://codeforces.com/problemset/problem/1814/C
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

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

	int t;
	cin >> t;
	while (t--) {
		int n, s1, s2;
		cin >> n >> s1 >> s2;
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			v[i].second = i + 1;
			cin >> v[i].first;
		}
		sort(all(v), greater<pair<int, int>>());

		int         t1 = s1, t2 = s2;
		vector<int> v1, v2;

#ifdef DEBUG
		for (auto& i : v) cerr << i.second << ' ';
		cerr << endl;
#endif

		for (auto& i : v) {
			if (t1 <= t2) {
				v1.pb(i.second);
				t1 += s1;
			} else {
				v2.pb(i.second);
				t2 += s2;
			}
		}

		cout << v1.size() << ' ';
		for (auto& i : v1) cout << i << ' ';
		cout << endl;

		cout << v2.size() << ' ';
		for (auto& i : v2) cout << i << ' ';
		cout << endl;
	}
	return 0;
}
