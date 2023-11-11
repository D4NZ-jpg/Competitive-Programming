// Problem: B. Badge
// Contest: Codeforces - Codeforces Round 503 (by SIS, Div. 2)
// URL: https://codeforces.com/problemset/problem/1020/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 23-09-2023 17:54:44
// Duration: 0:08:12
// End: 2023-09-23 18:02:56
// Rating: 1000
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

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	for (int i = 0; i < n; i++) {
		vector<bool> vis(n);
		int          curr = i;
		while (!vis[curr]) {
			vis[curr] = true;
			curr      = v[curr] - 1;
		}
		cout << curr + 1 << ' ';
	}

	return 0;
}
