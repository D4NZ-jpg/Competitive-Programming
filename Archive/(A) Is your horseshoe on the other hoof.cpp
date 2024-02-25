// Problem: A. Is your horseshoe on the other hoof?
// Contest: Codeforces - Codeforces Round 141 (Div. 2)
// URL: https://codeforces.com/problemset/problem/228/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-02-2024 14:07:10
// Duration: 0:05:47
// End: 2024-02-02 14:12:57
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

	set<ll> st;
	for (int i = 0; i < 4; i++) {
		ll j;
		cin >> j;
		st.insert(j);
	}

	cout << 4 - st.size();
	return 0;
}
