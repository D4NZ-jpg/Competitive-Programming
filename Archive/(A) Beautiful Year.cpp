// Problem: A. Beautiful Year
// Contest: Codeforces - Codeforces Round 166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 24-01-2024 11:47:30
// Duration: 0:05:34
// End: 2024-01-24 11:53:04
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

bool isDistinct(ll x) {
	set<ll> st;
	ll      cnt = 0;
	while (x) {
		st.insert(x % 10);
		x /= 10, cnt++;
	}
	return cnt == st.size();
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll x;
	cin >> x;

	x++;
	while (!isDistinct(x)) x++;

	cout << x;
	return 0;
}
