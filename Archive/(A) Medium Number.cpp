// Problem: A. Medium Number
// Contest: Codeforces Round #835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/A
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		vector<int16_t> nums(3);
		for (int i = 0; i < 3; i++) cin >> nums[i];

		sort(nums.begin(), nums.end());
		cout << nums[1] << '\n';
	}
	return 0;
}
