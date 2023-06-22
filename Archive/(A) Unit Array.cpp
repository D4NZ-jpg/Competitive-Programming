// Problem: A. Unit Array
// Contest: Codeforces - Codeforces Round 879 (Div. 2)
// URL: https://codeforces.com/contest/1834/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 19-06-2023 21:27:34
// End: 19-06-2023 21:43:43
// Duration: 0:16:09
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

		int val[2]{};

		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			val[max(0, tmp)]++;
		}

		int out = max(0, val[0] - n / 2);
		if (out) val[0] -= out;
		if (val[0] % 2) out++;

		cout << out << endl;
	}

	return 0;
}