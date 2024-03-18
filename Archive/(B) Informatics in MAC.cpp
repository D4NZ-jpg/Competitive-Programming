// Problem: B. Informatics in MAC
// Contest: Codeforces - Codeforces Round 932 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1935/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 05-03-2024 08:56:22
// Duration: 0:15:41
// End: 2024-03-05 09:12:03
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

ll getMex(vector<ll> v) {
	sort(all(v));
	ll mex = 0;
	for (auto& i : v) {
		if (i == mex) mex++;
		if (i > mex) return mex;
	}
	return mex;
}

ll sgmt(ll l, ll r, vector<ll>& v, ll trgt) {
	set<ll> st;

	ll mex = 0;
	for (int i = l; l < r; i++) {
		ll& curr = v[i];
		st.insert(curr);

		if (curr == mex) {
			auto it = st.lower_bound(mex);
			while (it != st.end() && *it == mex) mex++, it++;
		}
		if (mex == trgt) return i;
	}

	return -1;
}

void solve() {
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (auto& i : v) cin >> i;

	ll global = getMex(v);
	ll sgmt1  = sgmt(0, n, v, global);

	vector<ll> tmp(n - sgmt1 - 1);
	ll         idx = 0;
	for (int i = sgmt1 + 1; i < n; i++) tmp[idx++] = v[i];

	if (getMex(tmp) == global) {
		cout << 2 << endl;
		cout << 1 << ' ' << sgmt1 + 1 << endl;
		cout << sgmt1 + 2 << ' ' << n << endl;
	} else
		cout << -1 << endl;
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
