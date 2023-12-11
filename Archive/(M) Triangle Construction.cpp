// Problem: M. Triangle Construction
// Contest: Codeforces - 2023-2024 ICPC, Asia Jakarta Regional Contest (Online Mirror, Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1906/M
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// Start: 10-12-2023 09:35:43
// Duration: 0:10:10
// End: 2023-12-10 09:45:53
// Rating: 1700
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

	ll maxE = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		sum += j;
		maxE = max(j, maxE);
	}

	cout << min(sum / 3, sum - maxE);

	return 0;
}
