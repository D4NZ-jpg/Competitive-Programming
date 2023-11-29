// Problem: A. Secret Sport
// Contest: Codeforces - Codeforces Round 908 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1894/A
// Memory Limit: 512 MB
// Time Limit: 3000 ms
// Start: 16-11-2023 14:34:51
// Duration: 0:01:55
// End: 2023-11-16 14:36:46
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

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

	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string s;
		cin >> s;
		cout << s[n - 1] << endl;
	}

	return 0;
}
