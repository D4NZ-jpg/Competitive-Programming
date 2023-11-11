// Problem: B. Good Kid
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 21-09-2023 17:00:30
// Duration: 0:04:10
// End: 2023-09-21 17:04:40
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
	while (t--)

	{
		int product, n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];

		sort(all(v));

		product = v[0] + 1;
		for (int i = 1; i < n; i++) product *= v[i];

		cout << product << endl;
	}

	return 0;
}
