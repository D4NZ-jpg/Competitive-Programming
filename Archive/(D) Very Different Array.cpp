// Problem: D. Very Different Array
// Contest: Codeforces - Codeforces Round 920 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1921/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 26-01-2024 20:08:14
// Duration: 0:37:51
// End: 2024-01-26 20:46:05
// Rating: 1100
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
		ll n, m;
		cin >> n >> m;
		vector<ll> va(n), vb(m);
		deque<ll>  a, b;

		for (auto& i : va) cin >> i;
		for (auto& i : vb) cin >> i;

		sort(all(va));
		sort(all(vb));

		for (auto& i : va) a.pb(i);
		for (auto& i : vb) b.pb(i);

		ll ans = 0;
		while (a.size()) {
			ll curr = 0, idx;
			for (int i = 0; i < 4; i++) {
				ll cost = abs((i & 1 ? a.back() : a.front())
				              - (i & 2 ? b.back() : b.front()));
				if (cost > curr) curr = cost, idx = i;
			}
			ans += curr;

			if (idx & 1) a.pop_back();
			else
				a.pop_front();

			if (idx & 2) b.pop_back();
			else
				b.pop_front();
		}

		cout << ans << endl;
	}

	return 0;
}
