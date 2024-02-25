// Problem: A. Holiday Of Equality
// Contest: Codeforces - Codeforces Round 392 (Div. 2)
// URL: https://codeforces.com/problemset/problem/758/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 22-02-2024 20:07:00
// Duration: 0:21:35
// End: 2024-02-22 20:28:35
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
	ll         maxE = 0, sum = 0;
	for (auto& i : v) {
		cin >> i;
		maxE = max(i, maxE);
		sum += i;
	}

	cout << n * maxE - sum << endl;

	return 0;
}
