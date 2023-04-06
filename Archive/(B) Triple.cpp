// Problem: B. Triple
// Contest: Codeforces Round 784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/B
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int bucket[n + 1] = {0};

		for (int j = 0; j < n; j++) {
			int k;
			cin >> k;
			bucket[k]++;
		}

		bool printed = false;
		for (int k = 0; k < n + 1; k++)
			if (bucket[k] >= 3) {
				printed = true;
				cout << k << '\n';
				break;
			}
		if (!printed) cout << "-1" << '\n';
	}

	return 0;
}
