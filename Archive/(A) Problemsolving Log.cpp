// Problem: A. Problemsolving Log
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 19-12-2023 16:35:13
// Duration: 0:12:37
// End: 2023-12-19 16:47:50
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
		ll     n;
		string s;
		cin >> n >> s;

		vector<ll> v(30);
		for (char& c : s) v[c - 'A' + 1]++;

		ll ans = 0;
		for (int i = 1; i < 30; i++)
			if (v[i] >= i) ans++;
		cout << ans << endl;
	}

	return 0;
}
