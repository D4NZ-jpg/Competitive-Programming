// Problem: B. 2D Traveling
// Contest: Codeforces - Codeforces Round 896 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1869/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 10-09-2023 08:06:24
// Duration: 0:55:19
// End: 2023-09-10 09:01:43
// Rating: 1100
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

pair<int64_t, int64_t> closest(int64_t x, int64_t y,
                               vector<pair<int64_t, int64_t>>& v,
                               int                             n) {
	int64_t                cost = INT64_MAX;
	pair<int64_t, int64_t> out;
	for (int i = 0; i < n; i++) {
		auto curr = v[i];
		if (abs(x - curr.first) + abs(y - curr.second) < cost) {
			out  = curr;
			cost = abs(x - curr.first) + abs(y - curr.second);
		}
	}

	return out;
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
		int64_t n, k, a, b;
		cin >> n >> k >> a >> b;

		vector<pair<int64_t, int64_t>> cities(n);

		for (int i = 0; i < n; i++)
			cin >> cities[i].first >> cities[i].second;

		int64_t cost =
		  abs(cities[a - 1].first - cities[b - 1].first)
		  + abs(cities[a - 1].second - cities[b - 1].second);

		if (k == 0) {
			cout << cost << endl;
			continue;
		}

		pair<int64_t, int64_t> ca = closest(
		  cities[a - 1].first, cities[a - 1].second, cities, k);
		pair<int64_t, int64_t> cb = closest(
		  cities[b - 1].first, cities[b - 1].second, cities, k);

		if (ca == cities[a - 1] && cb == cities[b - 1]) {
			cout << 0 << endl;
			continue;
		}

		int64_t mi = abs(cities[a - 1].first - ca.first)
		             + abs(cities[a - 1].second - ca.second)
		             + abs(cities[b - 1].first - cb.first)
		             + abs(cities[b - 1].second - cb.second);

		cost = min(cost, mi);

		cout << cost << endl;
	}
	return 0;
}
