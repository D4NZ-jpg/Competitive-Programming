// Problem: C. Heavy Intervals
// Contest: Codeforces - Pinely Round 3 (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1909/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 26-12-2023 20:34:08
// Duration: 0:55:58
// End: 2023-12-26 21:30:06
// Rating: 1400
#include <bits/stdc++.h>

using namespace std;

using ll  = long long;
using ull = unsigned long long;
using plc = pair<ll, char>;

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

		vector<plc> v(2 * n);
		vector<ll>  c(n), l;
		l.reserve(n);

		for (int i = 0; i < 2 * n; i++) {
			cin >> v[i].first;
			v[i].second = (i < n ? 'l' : 'r');
		}
		for (auto& i : c) cin >> i;

		sort(all(c), greater<ll>());
		sort(all(v));

		stack<ll> st;
		for (plc& i : v) {
			if (i.second == 'l') {
				st.push(i.first);
				continue;
			}

			ll curr = st.top();
			st.pop();
			l.pb(i.first - curr);
		}

		sort(all(l));
		ll ans = 0;
		for (int i = 0; i < n; i++) ans += l[i] * c[i];

		cout << ans << endl;
	}

	return 0;
}
