// Problem: A. Pangram
// Contest: Codeforces - Codeforces Round 295 (Div. 2)
// URL: https://codeforces.com/problemset/problem/520/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 06-07-2023 22:04:43
// Duration: 0:09:26
// End: 2023-07-06 22:14:09
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

	int    n;
	string s;
	cin >> n >> s;

	for (char& c : s)
		if (c >= 'A' && c <= 'Z') c = char(c + 'a' - 'A');

	int cnt = 1;
	sort(all(s));
	for (int i = 1; i < n; i++)
		if (s[i] != s[i - 1]) cnt++;

	if (cnt == 26) cout << "YES";
	else
		cout << "NO";

	return 0;
}
