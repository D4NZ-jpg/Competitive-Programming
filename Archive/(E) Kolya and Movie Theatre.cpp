// Problem: E. Kolya and Movie Theatre
// Contest: Codeforces - Codeforces Round 894 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1862/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 20-10-2023 16:46:22
// Duration: 1:28:31
// End: 2023-10-20 18:14:53
// Rating: 1600
#include <bits/stdc++.h>

#include <queue>
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
		int64_t n, m, d;
		cin >> n >> m >> d;
		int64_t best = 0, ans = 0;
		priority_queue<int64_t, vector<int64_t>, greater<int64_t>> q;

		for (int64_t i = 1; i <= n; i++) {
			int j;
			cin >> j;
			j = max(j, 0);
			if (!j) continue;

			if ((q.size() < m && j) || (q.size() && q.top() < j)) {
				ans += j;
				q.push(j);
			}

			if (q.size() > m) {
				ans -= q.top();
				q.pop();
			}

			best = max(ans - d * i, best);
		}

		cout << best << endl;
	}

	return 0;
}
