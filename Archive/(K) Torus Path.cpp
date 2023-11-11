// Problem: K. Torus Path
// Contest: Codeforces - 2022-2023 ICPC, NERC, Southern and Volga
// Teams) URL: https://codeforces.com/problemset/problem/1765/K Memory
// Limit: 512 MB Time Limit: 2000 ms Start: 30-10-2023 14:28:06
// Duration: None
// End: 2023-10-30 14:46:16
// Rating: 1500
// URL: https://codeforces.com/problemset/problem/1765/K
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

	int n;
	cin >> n;

	ll sum = 0, mini = INT_MAX;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			ll k;
			cin >> k;
			sum += k;

			if (i + j == n - 1) mini = min(mini, k);
		}
	cout << sum - mini;
	return 0;
}
