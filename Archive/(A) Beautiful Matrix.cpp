// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 23-12-2022 13:41:38
// Duration: 0:03:35
// End: 2022-12-23 13:45:13
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int row, column;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			bool k;
			cin >> k;
			if (!k) continue;
			row    = i;
			column = j;
			goto out;
		}
out:
	cout << abs(2 - row) + abs(2 - column);

	return 0;
}