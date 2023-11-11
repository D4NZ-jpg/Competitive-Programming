// Problem: A. green_gold_dog, array and permutation
// Contest: Codeforces - Codeforces Round 897 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1867/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-09-2023 18:18:17
// Duration: 0:53:11
// End: 2023-09-20 19:11:28
// Rating: 800
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
		int n;
		cin >> n;
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i].first, v[i].second = i;

		sort(all(v));

		vector<int> q(n);

		for (int i = 0; i < n; i++) {
			auto curr      = v[i];
			q[curr.second] = n - i;
		}

		for (int i = 0; i < n; i++) cout << q[i] << ' ';
		cout << endl;
	}

	return 0;
}
