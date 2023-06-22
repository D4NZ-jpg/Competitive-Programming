// Problem: A. Sasha and Array Coloring
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/contest/1843/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-06-2023 08:35:41
// End: 20-06-2023 08:55:30
// Duration: 0:19:49

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
		int n;
		cin >> n;
		int sum = 0, arr[n];

		for (int i = 0; i < n; i++) cin >> arr[i];

		if (n == 1) {
			cout << "0\n";
			continue;
		}

		sort(arr, arr + n);

		for (int i = 0; i < n / 2; i++)
			sum += arr[n - i - 1] - arr[i];

		cout << sum << '\n';
	}
	return 0;
}

//  1 2 3 4 4 5
// 5 2