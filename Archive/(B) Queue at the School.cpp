// Problem: B. Queue at the School
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Duration: None
// End: 2022-12-26 02:17:15
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, t;
	cin >> n >> t;
	vector<char> p(n);
	for (int i = 0; i < n; i++) cin >> p[i];

	while (t--)
		for (int i = 1; i < n; i++)
			if (p[i - 1] == 'B' && p[i] == 'G') {
				swap(p[i], p[i - 1]);
				i++;
			}

	for (char& i : p) cout << i;
	return 0;
}

/*

0

01
BG


*/