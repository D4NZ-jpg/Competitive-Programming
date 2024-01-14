// Problem: A. Boy or Girl
// Contest: Codeforces - Codeforces Round 146 (Div. 2)
// URL: https://codeforces.com/problemset/problem/236/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 11-01-2024 19:35:07
// Duration: 0:03:15
// End: 2024-01-11 19:38:22
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

	string s;
	cin >> s;

	set<char> st;
	for (char& c : s) st.insert(c);

	cout << (st.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

	return 0;
}
