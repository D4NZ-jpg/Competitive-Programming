// Problem: A. cAPS lOCK
// Contest: Codeforces - Codeforces Beta Round 95 (Div. 2)
// URL: https://codeforces.com/problemset/problem/131/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
// Start: 18-03-2023 14:41:53
// End: 18-03-2023 14:50:33
// Duration: 0:08:40
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

	string s;
	cin >> s;

	int caps = 0;
	for (char& c : s)
		if ('A' <= c && c <= 'Z') caps++;

	if (caps == s.size()
	    || (caps == (s.size() - 1) && 'a' <= s[0] && s[0] <= 'z'))
		for (char& c : s)
			if ('A' <= c && c <= 'Z') cout << char(c - ('A' - 'a'));
			else
				cout << char(c + ('A' - 'a'));
	else
		cout << s;

	return 0;
}