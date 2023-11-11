// Problem: A. Twins
// Contest: Codeforces - Codeforces Round #111 (Div. 2)
// URL: https://codeforces.com/problemset/problem/160/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 04-02-2023 19:42:42
// Duration: 0:06:06
// End: 2023-02-04 19:48:48
// Rating: 900
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

	int n, total = 0, sum = 0, cnt = 0;
	cin >> n;
	int coins[n];

	for (int i = 0; i < n; i++) {
		cin >> coins[i];
		total += coins[i];
	}

	sort(coins, coins + n, greater<int>());
	for (int i = 0; i < n; i++) {
		total -= coins[i];
		sum += coins[i];
		cnt++;
		if (sum > total) break;
	}
	cout << cnt;
	return 0;
}