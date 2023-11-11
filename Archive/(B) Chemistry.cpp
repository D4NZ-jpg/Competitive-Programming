// Problem: B. Chemistry
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 25-10-2023 19:15:55
// Duration: 0:13:04
// End: 2023-10-25 19:28:59
// Rating: 900
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
#define YES          \
	cout << "YES\n"; \
	continue;
#define NO          \
	cout << "NO\n"; \
	continue;
int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int k, n;
		cin >> n >> k;
		string s;
		cin >> s;

		if (n == 1) { YES; }

		vector<int> v(26);
		for (char& c : s) v[c - 'a']++;

		int ops = 0;
		for (int& i : v) ops += i % 2;

		if (k + 1 >= ops) { YES; }
		NO;
	}

	return 0;
}
