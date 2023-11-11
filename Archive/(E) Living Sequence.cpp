// Problem: E. Living Sequence
// Contest: Codeforces - Codeforces Round 863 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1811/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 28-10-2023 20:44:16
// Duration: 0:57:55
// End: 2023-10-28 21:42:11
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

string convert(ll i) {
	string s = "";
	while (i) {
		char c = '0' + (i % 9);
		if (c >= '4') c++;
		s += c;

		i /= 9;
	}

	reverse(all(s));
	return s;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		cout << convert(n) << endl;
	}

	return 0;
}
