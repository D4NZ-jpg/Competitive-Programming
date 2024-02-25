// Problem: A. Even Odds
// Contest: Codeforces - Codeforces Round 188 (Div. 2)
// URL: https://codeforces.com/problemset/problem/318/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 31-01-2024 22:13:02
// Duration: 0:06:00
// End: 2024-01-31 22:19:02
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

	ll n, k;
	cin >> n >> k;

	ll odds = (n + 1) / 2;
	if (k <= odds) cout << (k - 1) * 2 + 1;
	else
		cout << (k - odds) * 2;

	return 0;
}

/*
* 1 3 5 7 9 11
* 2 4 6 8 10
*/
