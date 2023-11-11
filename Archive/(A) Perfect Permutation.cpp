// Problem: A. Perfect Permutation
// Contest: Codeforces - Codeforces Round #144 (Div. 2)
// URL: https://codeforces.com/problemset/problem/233/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Duration: None
// End: 2022-12-19 19:22:09
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	if (n % 2) {
		cout << -1;
		return 0;
	}

	for (int i = 1; i < n + 1; i++)
		if (i % 2) cout << i + 1 << ' ';
		else
			cout << i - 1 << ' ';

	return 0;
}