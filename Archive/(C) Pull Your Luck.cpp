// Problem: C. Pull Your Luck
// Contest: Codeforces - Nebius Welcome Round (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1804/C
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Start: 06-11-2023 16:11:41
// Duration: 2:23:41
// End: 2023-11-06 18:35:22
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

bool solve() {
	ll n, x, p;
	cin >> n >> x >> p;

	for (int i = 1; i <= min(p, 2 * n); i++) {
		x = (x + i) % n;
		if (!x) return true;
	}
	return false;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
		if (solve()) cout << "YES\n";
		else
			cout << "NO\n";

	return 0;
}
