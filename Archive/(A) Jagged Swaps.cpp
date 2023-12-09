// Problem: A. Jagged Swaps
// Contest: Codeforces - CodeTON Round 7 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1896/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 08-12-2023 19:33:50
// Duration: 0:03:25
// End: 2023-12-08 19:37:15
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
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;
		cout << (v[0] <= *min_element(v.begin() + 1, v.end()) ? "YES"
		                                                      : "NO")
		     << endl;
		;
	}

	return 0;
}
