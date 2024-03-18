// Problem: A. Vlad and the Best of Five
// Contest: Codeforces - Codeforces Round 928 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1926/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 05-03-2024 07:57:18
// Duration: 0:03:32
// End: 2024-03-05 08:00:50
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
		ll a = 0, b = 0;
		for (char& c : s) {
			if (c == 'A') a++;
			else
				b++;
		}
		cout << (a > b ? "A" : "B") << endl;
	}

	return 0;
}
