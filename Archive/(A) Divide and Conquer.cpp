// Problem: A. Divide and Conquer
// Contest: Codeforces Round #838 (Div. 2)
// URL: https://codeforces.com/contest/1762/problem/A
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

		vector<int> odds, evens;
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			if (k % 2) odds.push_back(k);
			else
				evens.push_back(k);
		}
		int oMin = INT_MAX;
		if (odds.size() % 2) {
			for (int i : odds) {
				int ops = 0;
				while (i % 2) {
					i /= 2;
					ops++;
				}
				oMin = min(oMin, ops);
			}

			int eMin = INT_MAX;
			if (evens.size()) {
				for (int i : evens) {
					int ops = 0;
					while (!(i % 2)) {
						i /= 2;
						ops++;
					}
					eMin = min(eMin, ops);
				}
			}
			cout << min(eMin, oMin) << '\n';
		} else
			cout << "0\n";
	}
	return 0;
}
