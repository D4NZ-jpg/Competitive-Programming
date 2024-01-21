// Problem: A. Wrong Subtraction
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 19-01-2024 20:44:31
// Duration: 0:03:58
// End: 2024-01-19 20:48:29
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

	ll n, k;
	cin >> n >> k;

	for (int i = 0; i < k; i++)
		if (n % 10) n--;
		else
			n /= 10;

	cout << n;

	return 0;
}
