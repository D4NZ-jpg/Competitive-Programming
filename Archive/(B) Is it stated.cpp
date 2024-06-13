// Problem: B. Is it stated?
// Contest: Codeforces - April Fools Day Contest 2024
// URL: https://codeforces.com/problemset/problem/1952/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 01-04-2024 13:47:29
// Duration: 0:02:48
// End: 2024-04-01 13:50:17
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
		string s;
		cin >> s;

		bool x = false;
		for (int i = 0; i < s.size() - 1; i++)
			if (s[i] == 'i' && s[i + 1] == 't') {
				x = true;
				break;
			}

		if (x) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
