// Problem: A. Expression
// Contest: Codeforces - Codeforces Round 274 (Div. 2)
// URL: https://codeforces.com/problemset/problem/479/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-03-2023 14:51:16
// End: 18-03-2023 15:21:29
// Duration: 0:30:13
// Rating: 1000

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

	int a, b, c;
	cin >> a >> b >> c;

	if (a == 1 && c == 1) cout << b + 2;
	else if (a != 1 && b == 1 && c != 1)
		cout << (min(a, c) + 1) * max(a, c);
	else if (a == 1 || c == 1)
		cout << (b + min(a, c)) * max(a, c);
	else
		cout << a * b * c;

	return 0;
}