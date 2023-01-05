// Problem: C. Advantage
// Contest: Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/C
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

		if (n < 2) {
			cout << 0 << '\n';
			continue;
		}

		vector<int> nums(n);
		vector<int> Unsortednums(n);

		for (int i = 0; i < n; i++) {
			cin >> nums[i];
			Unsortednums[i] = nums[i];
		}

		sort(nums.begin(), nums.end());

		for (int i : Unsortednums)
			if (i != nums[n - 1]) cout << i - nums[n - 1] << ' ';
			else
				cout << i - nums[n - 2] << ' ';

		cout << '\n';
	}
	return 0;
}
