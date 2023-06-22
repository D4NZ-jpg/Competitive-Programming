// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round 85 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/112/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 20-06-2023 14:40:57
// End: 20-06-2023 14:45:23
// Duration: 0:04:26
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

	string a, b;
	cin >> a >> b;

	for (char& c : b)
		if (c >= 'A' && c <= 'Z') c -= 'A' - 'a';
	for (char& c : a)
		if (c >= 'A' && c <= 'Z') c -= 'A' - 'a';

	if (a < b) cout << -1;
	else if (a > b)
		cout << 1;
	else
		cout << 0;

	return 0;
}