// Problem: E. Character Blocking
// Contest: Codeforces - Codeforces Round 878 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1840/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 23-12-2023 09:31:54
// Duration: 0:12:58
// End: 2023-12-23 09:44:52
// Rating: 1600
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
		string a, b;
		ll     t, q;

		cin >> a >> b >> t >> q;
		set<ll> st;

		for (int i = 0; i < a.size(); i++)
			if (a[i] != b[i]) st.insert(i);

		ll         tick = 0;
		queue<pll> que;
		while (q--) {
			ll op;
			cin >> op;

			while (que.size() && que.front().first <= tick) {
				auto curr = que.front();
				que.pop();
				st.insert(curr.second);
			}

			if (op == 1) {
				ll pos;
				cin >> pos;
				auto it = st.lower_bound(pos - 1);

				if (it != st.end() && *it == pos - 1) {
					st.erase(it);
					que.push({tick + t, pos - 1});
				}
			}
			if (op == 2) {
				ll s1, pos1, s2, pos2;
				cin >> s1 >> pos1 >> s2 >> pos2;

				if (s1 == 1 && s2 == 1)
					swap(a[pos1 - 1], a[pos2 - 1]);
				if (s1 == 1 && s2 == 2)
					swap(a[pos1 - 1], b[pos2 - 1]);
				if (s1 == 2 && s2 == 1)
					swap(b[pos1 - 1], a[pos2 - 1]);
				if (s1 == 2 && s2 == 2)
					swap(b[pos1 - 1], b[pos2 - 1]);

				if (st.count(pos1 - 1))
					st.erase(st.lower_bound(pos1 - 1));
				if (st.count(pos2 - 1))
					st.erase(st.lower_bound(pos2 - 1));

				if (a[pos1 - 1] != b[pos1 - 1]) st.insert(pos1 - 1);
				if (a[pos2 - 1] != b[pos2 - 1]) st.insert(pos2 - 1);
			}
			if (op == 3) cout << (st.empty() ? "YES" : "NO") << endl;

			tick++;
		}
	}
	return 0;
}
