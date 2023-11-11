// Problem: C. Swap Game
// Contest: Codeforces - Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1747/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Duration: None
// End: 2022-12-27 00:12:52
// Rating: 1200
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
		int nums[n];
		for (int i = 0; i < n; i++) cin >> nums[i];
		int k = nums[0];
		sort(nums, nums + n);
		if (k == nums[0]) cout << "Bob\n";
		else
			cout << "Alice\n";
	}
	return 0;
}