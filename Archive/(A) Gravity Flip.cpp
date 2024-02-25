// Problem: A. Gravity Flip
// Contest: Codeforces - Codeforces Round 238 (Div. 2)
// URL: https://codeforces.com/problemset/problem/405/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-02-2024 21:35:22
// Duration: 0:02:00
// End: 2024-02-06 21:37:22
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
	ll n;
	cin >> n;

	vector<ll> v(n);
	for (auto& i : v) cin >> i;

	sort(all(v));
	for (auto& i : v) cout << i << ' ';

	return 0;
}
