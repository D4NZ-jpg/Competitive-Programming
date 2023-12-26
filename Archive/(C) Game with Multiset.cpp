// Problem: C. Game with Multiset
// Contest: Codeforces - Educational Codeforces Round 160 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1913/C
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// Start: 18-12-2023 20:53:26
// Duration: 0:18:46
// End: 2023-12-18 21:12:12
// Rating: 1300
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

bool solve(ll& x, vector<ll> v) {
	for (int i = 0; i < 32; i++) {
		if (x & (1 << i)) {
			if (!v[i]) return false;
			else
				v[i]--;
		}
		v[i + 1] += v[i] / 2;
	}
	return true;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll m;
	cin >> m;

	vector<ll> v(80);

	ll mask = 0;
	while (m--) {
		ll op, x;
		cin >> op >> x;
		if (op == 1) v[x]++;
		else if (solve(x, v))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
