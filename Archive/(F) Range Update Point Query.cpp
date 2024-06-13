// Problem: F. Range Update Point Query
// Contest: Codeforces - Codeforces Round 849 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1791/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 12-03-2024 00:02:56
// Duration: 0:16:29
// End: 2024-03-12 00:19:25
// Rating: 1500
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
inline ll digSum(ll x) {
	ll sum = 0;
	while (x) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

void solve() {
	ll n, q;
	cin >> n >> q;
	vector<ll> v(n), ops(n);
	for (auto& i : v) cin >> i;

	set<ll> st;
	for (int i = 0; i < n; i++) st.insert(st.end(), i);

	while (q--) {
		ll op;
		cin >> op;
		if (op == 1) {
			ll l, r;
			cin >> l >> r;
			l--, r--;

			while (l <= r) {
				auto it = st.lower_bound(l);
				l       = *it;
				if (l > r) break;

				ops[l]++;
				v[l] = digSum(v[l]);
				if (ops[l] > 2) st.erase(it);
				l++;
			}
		} else {
			ll x;
			cin >> x;
			cout << v[x - 1] << endl;
		}
	}
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) solve();

	return 0;
}
