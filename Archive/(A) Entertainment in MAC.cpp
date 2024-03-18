// Problem: A. Entertainment in MAC
// Contest: Codeforces - Codeforces Round 932 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1935/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 05-03-2024 08:37:01
// Duration: 0:10:14
// End: 2024-03-05 08:47:15
// Rating: None
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

	int tc;
	cin >> tc;
	while (tc--) {
		ll     n;
		string s;
		cin >> n >> s;

		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] < s[s.size() - 1 - i]) break;
			if (s[i] > s[s.size() - 1 - i]) {
				string tmp = s;
				reverse(all(s));
				s += tmp;
				break;
			}
		}
		cout << s << endl;
	}

	return 0;
}
