// Problem: B. AB Flipping
// Contest: Codeforces - CodeTON Round 7 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1896/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 15-12-2023 22:00:52
// Duration: 0:11:30
// End: 2023-12-15 22:12:22
// Rating: 900
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
		string s;
		cin >> s;

		ll l = 0, r = n - 1;
		while (s[l] == 'B' && l < r) l++;
		while (s[r] == 'A' && r > l) r--;

		cout << r - l << endl;
	}

	return 0;
}
