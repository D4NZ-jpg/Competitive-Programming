// Problem: A. Cipher Shifer
// Contest: Codeforces - Codeforces Round 878 (Div. 3)
// URL: https://codeforces.com/contest/1840/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-06-2023 01:28:01
// End: 20-06-2023 01:31:08
// Duration: 0:03:07
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		char c = '@';
		for (int i = 0; i < n; i++)
			if (c == '@') {
				c = s[i];
				cout << c;
			} else if (c == s[i])
				c = '@';
		cout << '\n';
	}

	return 0;
}