// Problem: A. IQ test
// Contest: Codeforces - Codeforces Beta Round 25 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/25/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 30-09-2023 14:18:29
// Duration: 0:01:52
// End: 2023-09-30 14:20:21
// Rating: 1300
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

	int n;
	cin >> n;
	vector<int> odd, even;
	for (int i = 1; i <= n; i++) {
		int j;
		cin >> j;
		if (j % 2) odd.pb(i);
		else
			even.pb(i);
	}

	if (odd.size() == 1) cout << odd[0];
	else
		cout << even[0];
	return 0;
}
