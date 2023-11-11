// Problem: A. Joey Takes Money
// Contest: Codeforces - Codeforces Round #841 (Div. 2) and Divide by
// Zero 2022 URL: https://codeforces.com/contest/1731/problem/A Memory
// Limit: 256 MB Time Limit: 1000 ms Start: 27-12-2022 08:41:51
// Duration: None
// End: 2022-12-27 08:52:14
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1731/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		uint64_t result = 0;
		cin >> result;
		for (int i = 1; i < n; i++) {
			uint64_t k;
			cin >> k;
			result *= k;
		}

		cout << 2022 * (result + n - 1) << '\n';
	}

	return 0;
}