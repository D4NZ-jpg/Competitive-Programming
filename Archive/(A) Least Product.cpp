// Problem: A. Least Product
// Contest: Codeforces - Codeforces Round 917 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1917/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 24-12-2023 08:35:14
// Duration: 0:12:19
// End: 2023-12-24 08:47:33
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

		ll   minE = v[0], cnt = 0;
		bool zeros = false;
		for (auto& i : v) {
			minE = min(minE, i);
			if (i < 0) cnt++;
			if (!i) zeros = true;
		}

		if (zeros) cout << 0 << endl;
		else if (minE < 0 && (cnt % 2))
			cout << 0 << endl;
		else
			cout << 1 << endl << 1 << ' ' << 0 << endl;
	}

	return 0;
}
