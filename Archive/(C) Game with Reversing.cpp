// Problem: C. Game with Reversing
// Contest: Codeforces - Codeforces Round 879 (Div. 2)
// URL: https://codeforces.com/contest/1834/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-06-2023 00:03:41
// End: 20-06-2023 01:17:15
// Duration: 1:13:34
// Rating: 1200

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
		string s, t;
		cin >> s >> t;

		int nor = 0, rev = 0, outA = 0, outB = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] != t[i]) nor++;
			if (s[i] != t[n - i - 1]) rev++;
		}

		if (!nor) {
			cout << "0\n";
			continue;
		}
		if (!rev) {
			cout << "2\n";
			continue;
		}

		outA = 2 * nor - nor % 2;
		outB = 2 * rev + rev % 2 - 1;
		cout << min(outA, outB) << '\n';
	}

	return 0;
}

/*
abcdefgh
hguedfbh

hgfedcba
hguedfbh
*/