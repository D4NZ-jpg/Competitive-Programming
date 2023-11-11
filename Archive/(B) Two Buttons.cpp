// Problem: B. Two Buttons
// Contest: Codeforces - Codeforces Round 295 (Div. 2)
// URL: https://codeforces.com/problemset/problem/520/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 14-06-2023 11:30:04
// Duration: 0:39:03
// End: 2023-06-14 12:09:07
// Rating: 1400
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int solve(int n, int m) {
	int count = 0;
	while (n != m)
		if (n > m) {
			count++;
			m++;
		} else if (m % 2) {
			m++;
			m /= 2;
			count += 2;
		} else {
			m /= 2;
			count++;
		}

	return count;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	cout << solve(n, m);

	return 0;
}

/*

4 4
3 2
2 1
1

*/