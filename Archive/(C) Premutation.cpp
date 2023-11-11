// Problem: C. Premutation
// Contest: Codeforces - Codeforces Round #847 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1790/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 27-01-2023 09:04:08
// Duration: 0:34:33
// End: 2023-01-27 09:38:41
// Rating: 1000
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
		pair<vector<int>, bool> arr[n];

		for (int i = 0; i < n; i++)
			for (int k = 0; k < n - 1; k++) {
				int j;
				cin >> j;
				arr[i].first.pb(j);
				arr[i].second = false;
			}

		int res[n];
		for (int i = 0; i < n; i++) {
			int a = -1, b = -1, ca = 0, cb = 0, la, lb;
			for (int j = 0; j < n; j++) {
				int curr;
				if (arr[j].second) curr = arr[j].first[i - 1];
				else
					curr = arr[j].first[i];
				if (a == -1) a = curr;
				if (curr == a) {
					ca++;
					la = j;
				}
				if (curr != a) b = curr;
				if (curr == b) {
					cb++;
					lb = j;
				}
			}

			if (cb < ca) {
				arr[lb].second = true;
				res[i]         = a;
			} else {
				arr[la].second = true;
				res[i]         = b;
			}
		}
		for (int i = 0; i < n; i++) cout << res[i] << ' ';
		cout << '\n';
	}
	return 0;
}