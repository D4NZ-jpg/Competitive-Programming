// Problem: A. Anton and Danik
// Contest: Codeforces - Codeforces Round 379 (Div. 2)
// URL: https://codeforces.com/problemset/problem/734/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-01-2024 20:04:18
// Duration: 0:02:25
// End: 2024-01-20 20:06:43
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

	ll a = 0, b = 0;
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == 'A') a++;
		else
			b++;
	}

	if (a == b) cout << "Friendship";
	else
		cout << (a > b ? "Anton" : "Danik");
	return 0;
}
