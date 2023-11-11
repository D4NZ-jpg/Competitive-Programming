// Problem: A. Short Sort
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 21-09-2023 16:38:58
// Duration: 0:04:55
// End: 2023-09-21 16:43:53
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
		string s;
		cin >> s;

		int ans = 0;
		for (int i = 0; i < 3; i++) {
			if (s[i] == char('a' + i)) continue;
			ans++;
		}

		if (ans == 3) cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}
