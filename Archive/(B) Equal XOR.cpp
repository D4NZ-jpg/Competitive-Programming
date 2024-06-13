// Problem: B. Equal XOR
// Contest: Codeforces - Codeforces Round 934 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1944/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-03-2024 08:37:49
// Duration: 0:29:16
// End: 2024-03-16 09:07:05
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

void solve() {
	ll n, k;
	cin >> n >> k;

	vector<pll> pos(n + 1, {-1, -1});
	for (int i = 0; i < 2 * n; i++) {
		ll x;
		cin >> x;

		bool mid = i >= n;

		if (pos[x].first == -1) pos[x].first = mid;
		else
			pos[x].second = mid;
	}

	vector<ll> a, b;
	queue<ll>  aq, bq;

	for (int i = 1; i <= n && a.size() < 2 * k; i++) {
		pll& curr = pos[i];

		if (curr.first == curr.second) {
			if (curr.first) bq.push(i);
			else
				aq.push(i);
		}
	}

	while (a.size() + 2 <= 2 * k && aq.size() && bq.size()) {
		ll x = aq.front(), y = bq.front();
		aq.pop(), bq.pop();

		a.pb(x), a.pb(x), b.pb(y), b.pb(y);
	}

	for (int i = 1; i <= n && a.size() < 2 * k; i++) {
		pll& curr = pos[i];

		if (curr.first != curr.second) a.pb(i), b.pb(i);
	}

	for (ll& i : a) cout << i << ' ';
	cout << endl;
	for (ll& i : b) cout << i << ' ';
	cout << endl;
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
