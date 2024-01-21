// Problem: A. Word
// Contest: Codeforces - Codeforces Beta Round 55 (Div. 2)
// URL: https://codeforces.com/problemset/problem/59/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-01-2024 21:07:25
// Duration: 0:06:07
// End: 2024-01-18 21:13:32
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	ll uppers = 0, lowers = 0;
	for (char& c : s)
		if (c >= 'a' && c <= 'z') lowers++;
		else
			uppers++;

	if (lowers >= uppers)
		for (char& c : s)
			if (c >= 'A' && c <= 'Z') cout << char(c + ('a' - 'A'));
			else
				cout << c;
	else
		for (char& c : s)
			if (c >= 'a' && c <= 'z') cout << char(c - ('a' - 'A'));
			else
				cout << c;
	return 0;
}
