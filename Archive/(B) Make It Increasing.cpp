// Problem: B. Make It Increasing
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1675/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 04-02-2023 19:51:51
// Duration: 0:18:20
// End: 2023-02-04 20:10:11
// Rating: 900
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n, cnt = 0;
		cin >> n;
		int nums[n];
		for (int i = 0; i < n; i++) cin >> nums[i];

		for (int i = n - 2; i >= 0; i--) {
			while (nums[i] >= nums[i + 1] && nums[i]) {
				cnt++;
				nums[i] /= 2;
			}
			if (nums[i] == nums[i + 1]) {
				cnt = -1;
				break;
			}
		}

		cout << cnt << '\n';
	}
	return 0;
}

/*

8 26 5 21 10
8 26 5 10 10
8 26 5 5 10
8 26 2 5 10
0 1 2 5 10

*/