// Problem: A. Channel
// Contest: Codeforces - Pinely Round 2 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1863/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 03-01-2024 12:59:53
// Duration: 0:05:41
// End: 2024-01-03 13:05:34
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

	int tc;
	cin >> tc;
	while (tc--) {
		ll n, a, q;
		cin >> n >> a >> q;
		string s;
		cin >> s;

		ll curr = a, acumm = a, maxE = a;
		for (char& c : s) {
			if (c == '+') curr++, acumm++;
			else
				curr--;
			maxE = max(maxE, curr);
		}

		if (maxE >= n) cout << "YES" << endl;
		else if (acumm >= n)
			cout << "MAYBE" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
