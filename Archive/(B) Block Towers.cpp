// Problem: B. Block Towers
// Contest: Educational Codeforces Round 140 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1767/problem/B
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		uint64_t mainT;

		cin >> mainT;
		vector<uint64_t> towers(n - 1);
		for (int i = 0; i < n - 1; i++) cin >> towers[i];

		sort(towers.begin(), towers.end());
		for (int i = 0; i < n - 1; i++) {
			int x = (towers[i] - mainT) / 2;
			if (mainT < towers[i])
				mainT += (!((towers[i] - mainT) % 2)) ? x : x + 1;
		}
		cout << mainT << '\n';
	}
	return 0;
}