// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round 197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 08-01-2024 10:01:51
// Duration: 0:03:38
// End: 2024-01-08 10:05:29
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

	vector<char> v;
	for (char& c : s) {
		if (c == '+') continue;
		v.pb(c);
	}
	sort(all(v));
	for (int i = 0; i < v.size() - 1; i++) cout << v[i] << '+';
	cout << v[v.size() - 1];

	return 0;
}
