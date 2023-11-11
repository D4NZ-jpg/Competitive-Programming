// Problem: A. Polycarp and the Day of Pi
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1790/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 27-01-2023 08:36:32
// Duration: 0:12:09
// End: 2023-01-27 08:48:41
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

	const string pi = "3141592653589793238462643383279502884197";

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			if (pi[i] != s[i]) break;
			cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}