// Problem: C. Odd/Even Increments
// Contest: Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/C
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int z = 0; z < t; z++) {
		int n;
		cin >> n;
		int nums[n];
		for (int i = 0; i < n; i++) cin >> nums[i];

		int even = nums[0] % 2;
		int odd;
		if (n > 1) odd = nums[1] % 2;

		for (int i = 0; i < n; i += 2)
			if (nums[i] % 2 != even) goto fail;
		for (int i = 1; i < n; i += 2)
			if (nums[i] % 2 != odd) goto fail;
		cout << "YES" << '\n';
		continue;
	fail:
		cout << "NO" << '\n';
	}
	return 0;
}
