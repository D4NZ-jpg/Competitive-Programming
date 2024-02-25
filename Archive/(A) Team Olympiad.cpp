// Problem: A. Team Olympiad
// Contest: Codeforces - Codeforces Round 279 (Div. 2)
// URL: https://codeforces.com/problemset/problem/490/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 12-02-2024 19:43:57
// Duration: 0:03:39
// End: 2024-02-12 19:47:36
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
	queue<ll> a, b, c;
	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		if (j == 1) a.push(i + 1);
		if (j == 2) b.push(i + 1);
		if (j == 3) c.push(i + 1);
	}

	cout << min(min(a.size(), b.size()), c.size()) << endl;
	while (a.size() && b.size() && c.size()) {
		cout << a.front() << ' ' << b.front() << ' ' << c.front()
		     << endl;
		a.pop(), b.pop(), c.pop();
	}
	return 0;
}
