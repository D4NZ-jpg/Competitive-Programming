// Problem: A. Die Roll
// Contest: Codeforces - Codeforces Beta Round #9 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/9/A
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// // Powered by CP Editor (https: cpeditor.org)
// Duration: None
// End: 2022-12-19 16:29:06
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int y, w;
	cin >> y >> w;
	int div = 6 - max(y, w) + 1;
	int gcd = __gcd(div, 6);
	cout << div / gcd << '/' << 6 / gcd;
	return 0;
}