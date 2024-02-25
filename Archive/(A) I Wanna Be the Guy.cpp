// Problem: A. I Wanna Be the Guy
// Contest: Codeforces - Codeforces Round 268 (Div. 2)
// URL: https://codeforces.com/problemset/problem/469/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 08-02-2024 19:24:04
// Duration: 0:12:14
// End: 2024-02-08 19:36:18
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
bool solve() {
	ll n;
	cin >> n;
	vector<bool> v(n + 1);
	ll           p, q;
	cin >> p;
	for (int i = 0; i < p; i++) {
		ll j;
		cin >> j;
		v[j] = true;
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		ll j;
		cin >> j;
		v[j] = true;
	}

	for (int i = 1; i <= n; i++)
		if (!v[i]) return false;

	return true;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cout << (solve() ? "I become the guy." : "Oh, my keyboard!");
	return 0;
}
