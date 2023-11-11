// Problem: A. Showstopper
// Contest: Codeforces - Codeforces Round 860 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1798/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 26-03-2023 08:35:24
// Duration: 0:10:31
// End: 2023-03-26 08:45:55
// Rating: 800
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
		vector<int> a(n);
		vector<int> b(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];

		int ma = a[n - 1], mb = b[n - 1];

		for (int i = 0; i < n; i++)
			if ((a[i] > ma || b[i] > mb)
			    && (a[i] > mb || b[i] > ma)) {
				cout << "No\n";
				goto next;
			}
		cout << "Yes\n";
	next:
		continue;
	}

	return 0;
}