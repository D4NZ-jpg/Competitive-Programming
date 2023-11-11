// Problem: C. To Become Max
// Contest: Codeforces - Codeforces Round 890 (Div. 2) supported by
// Constructor Institute URL: https://codeforces.com/problemset/problem/1856/C Memory Limit: 256
// MB Time Limit: 2000 ms Start: 30-10-2023 15:51:28
// Duration: None
// End: 2023-10-30 18:25:43
// Rating: 1600
// URL: https://codeforces.com/problemset/problem/1856/C
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

inline ll sum(ll n) { return (n * (n + 1)) / 2; }

bool check(vector<ll>& v, int trgt, int k) {
	for (int i = 0; i < v.size(); i++) {
		ll x = trgt;
		if (v[i] >= x) return true;

		ll idx = i, ks = 0;
		while (idx < v.size()) {
			if (v[idx] >= x) return true;

			ks += x-- - v[idx++];
			if (ks > k) break;
		}
	}
	return false;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for (ll& i : v) cin >> i;

		cerr << "====\n";
		ll l = 0, r = INT_MAX;
		while (l < r) {
			ll   mid = (l + r + 1) / 2;
			bool can = check(v, mid, k);

			cerr << l << ' ' << r << " -> " << (l + r + 1) / 2
			     << " - " << can << endl;

			if (can) l = mid;
			else
				r = mid - 1;
		}
		cout << l << endl;
	}

	return 0;
}
