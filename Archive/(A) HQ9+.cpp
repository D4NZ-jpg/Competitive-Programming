// Problem: A. HQ9+
// Contest: Codeforces - Codeforces Beta Round 96 (Div. 2)
// URL: https://codeforces.com/problemset/problem/133/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 03-02-2024 18:51:12
// Duration: 0:02:27
// End: 2024-02-03 18:53:39
// Rating: 900
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
	string ops;
	cin >> ops;
	bool ans = false;
	for (char& c : ops)
		if (c == 'Q' || c == 'H' || c == '9') ans = true;

	cout << (ans ? "YES" : "NO");

	return 0;
}
