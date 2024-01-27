// Problem: A. In Search of an Easy Problem
// Contest: Codeforces - Technocup 2019 - Elimination Round 1
// URL: https://codeforces.com/problemset/problem/1030/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 25-01-2024 10:03:44
// Duration: 0:01:34
// End: 2024-01-25 10:05:18
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
	ll n;
	cin >> n;
	bool ans = 0;
	for (int i = 0; i < n; i++) {
		bool v;
		cin >> v;
		ans = ans || v;
	}

	cout << (ans ? "HARD" : "EASY");

	return 0;
}
