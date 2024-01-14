// Problem: A. Word Capitalization
// Contest: Codeforces - Codeforces Round 172 (Div. 2)
// URL: https://codeforces.com/problemset/problem/281/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 10-01-2024 18:16:48
// Duration: 0:04:04
// End: 2024-01-10 18:20:52
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

	cout << ('a' <= s[0] && s[0] <= 'z' ? char(s[0] + 'A' - 'a')
	                                    : s[0]);
	for (int i = 1; i < s.size(); i++) cout << s[i];

	return 0;
}
