// Problem: A. Translation
// Contest: Codeforces - Codeforces Beta Round 40 (Div. 2)
// URL: https://codeforces.com/problemset/problem/41/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 21-01-2024 11:52:47
// Duration: 0:01:17
// End: 2024-01-21 11:54:04
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

	string a, b;
	cin >> a >> b;
	reverse(all(b));
	cout << (a == b ? "YES" : "NO");

	return 0;
}
