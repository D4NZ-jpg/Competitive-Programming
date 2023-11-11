// Problem: A. Domino piling
// Contest: Codeforces - Codeforces Beta Round #47
// URL: https://codeforces.com/problemset/problem/50/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Duration: None
// End: 2022-12-19 17:20:06
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	if ((n * m) % 2) cout << ceil(n * m / 2.0f) - 1;
	else
		cout << n * m / 2;

	return 0;
}