// Problem: B. Sets and Union
// Contest: Codeforces - Codeforces Round 899 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1882/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 30-10-2023 19:37:08
// Duration: 0:11:03
// End: 2023-10-30 19:48:11
// Rating: 1300
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

int solve(vector<set<int>>& v, int k) {
	set<int> j;
	for (auto& i : v)
		if (!i.count(k))
			for (auto& m : i) j.insert(m);

	return j.size();
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		set<int>         full;
		vector<set<int>> v(n);

		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			while (k--) {
				int j;
				cin >> j;
				full.insert(j);
				v[i].insert(j);
			}
		}

		int maxi = 0;
		for (auto& i : full) maxi = max(maxi, solve(v, i));
		cout << maxi << endl;
	}

	return 0;
}
