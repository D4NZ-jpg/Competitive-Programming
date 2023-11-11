// Problem: A. Fancy Fence
// Contest: Codeforces - Codeforces Round 165 (Div. 2)
// URL: https://codeforces.com/problemset/problem/270/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-03-2023 17:32:58
// Duration: 0:21:33
// End: 2023-03-18 17:54:31
// Rating: 1100
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
		int a;
		cin >> a;

		if (a >= 180) cout << "NO\n";
		else if (-360 % (a - 180) == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}