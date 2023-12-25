// Problem: C. Vlad Building Beautiful Array
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1833/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-12-2023 09:51:06
// Duration: 0:07:56
// End: 2023-12-20 09:59:02
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
	vector<ll> v(n);

	ll minEven = INT_MAX, minOdd = INT_MAX;

	for (auto& i : v) {
		cin >> i;
		if (i % 2) minOdd = min(minOdd, i);
		else
			minEven = min(minEven, i);
	}

	ll a = minOdd - minEven, b = minEven - minOdd;

	if (minEven == INT_MAX || minOdd == INT_MAX) return true;
	return (!(a % 2) && a > 0) || ((b % 2) && b > 0);
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		if (solve()) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
