// Problem: D. Reverse Madness
// Contest: Codeforces - Codeforces Round 900 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1878/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 12-11-2023 21:29:15
// Duration: 1:51:40
// End: 2023-11-12 23:20:55
// Rating: 1600
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	int t;
	cin >> t;
	while (t--) {
		ll     n, k, qz;
		string s;
		cin >> n >> k >> s;

		vector<ll> l(k), r(k);

		for (ll& i : l) cin >> i;
		for (ll& i : r) cin >> i;

		cin >> qz;
		vector<ll> qv(qz);
		for (ll& i : qv) cin >> i;

		vector<bool> flip(n + 4);

		for (ll& x : qv) {
			ll idx = lower_bound(all(r), x) - r.begin();
			ll li = l[idx], ri = r[idx];

			ll a = min(x, ri + li - x), b = max(x, ri + li - x);
			a--;

			flip[a] = !flip[a], flip[b] = !flip[b];
		}
		for (int i = 1; i < n; i++) flip[i] = flip[i] != flip[i - 1];

		for (int i = 0; i < k; i++) {
			ll li = --l[i], ri = --r[i];
			ll mid = (li + ri) / 2;
			for (int i = 0; i <= mid - li; i++)
				if (flip[li + i]) swap(s[li + i], s[ri - i]);
		}

		cout << s << endl;
	}

	return 0;
}
