// Problem: A. Dislike of Threes
// Contest: Codeforces - Codeforces Round 739 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1560/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-02-2024 13:11:37
// Duration: 0:02:53
// End: 2024-02-13 13:14:30
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

	vector<ll> v(100010);

	ll cnt = 1;
	for (int i = 1; i < 100010; i++) {
		while (!(cnt % 3) || cnt % 10 == 3) cnt++;
		v[i] = cnt++;
	}

	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		cout << v[n] << endl;
	}
	return 0;
}
