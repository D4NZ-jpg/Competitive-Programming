// Problem: C. Card Game
// Contest: Codeforces - Codeforces Round 899 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1882/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 30-10-2023 19:51:23
// Duration: 0:53:54
// End: 2023-10-30 20:45:17
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

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
		vector<int> v(n);
		for (int& i : v) cin >> i;

		if (n == 1) {
			cout << max(0, v[0]) << endl;
			continue;
		}
		ll sum = 0;
		if (v[0] < 0) {
			if (v[0] + v[1] > 0) sum += v[0] + v[1];

		} else {
			for (int i = 0; i < n && i < 2; i++)
				if (v[i] > 0) sum += v[i];
		}

		for (int i = 2; i < n; i++)
			if (v[i] > 0) sum += v[i];

		cout << sum << endl;
	}
	return 0;
}
