// Problem: B. Chaya Calendar
// Contest: Codeforces - Codeforces Round 927 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1932/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-02-2024 23:09:26
// Duration: 0:10:49
// End: 2024-02-18 23:20:15
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
		ll n;
		cin >> n;

		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		ll curr = v[0];
		for (int i = 1; i < n; i++)
			curr = (curr + v[i]) / v[i] * v[i];
		cout << curr << endl;
	}
	return 0;
}
