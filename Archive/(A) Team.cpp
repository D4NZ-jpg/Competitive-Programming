// Problem: A. Team
// Contest: Codeforces - Codeforces Round #143 (Div. 2)
// URL: https://codeforces.com/problemset/problem/231/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 29-12-2022 17:36:22
// Duration: 0:02:08
// End: 2022-12-29 17:38:30
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int k = 0;
	while (n--) {
		int s = 0;
		for (int i = 0; i < 3; i++) {
			bool j;
			cin >> j;
			if (j) s++;
		}

		if (s > 1) k++;
	}
	cout << k;
	return 0;
}