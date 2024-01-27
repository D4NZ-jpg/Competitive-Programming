// Problem: A. Tram
// Contest: Codeforces - Codeforces Beta Round 87 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/116/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 22-01-2024 22:22:24
// Duration: 0:05:55
// End: 2024-01-22 22:28:19
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
	vector<ll> v(n);
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		v[i] += b - a;
	}

	ll ans = v[0];
	for (int i = 1; i < n; i++)
		v[i] += v[i - 1], ans = max(ans, v[i]);

	cout << ans;

	return 0;
}
