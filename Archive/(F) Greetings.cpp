// Problem: F. Greetings
// Contest: Codeforces - Codeforces Round 918 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1915/F
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// Start: 02-01-2024 11:00:25
// Duration: 0:38:18
// End: 2024-01-02 11:38:43
// Rating: 1500
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
typedef __gnu_pbds::tree<
  int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag,
  __gnu_pbds::tree_order_statistics_node_update>
  ordered_set;

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

		vector<pll> v(n);
		ordered_set t;
		for (auto& i : v) cin >> i.second >> i.first;

		sort(all(v));

		ll ans = 0;
		for (auto& i : v) {
			ans += t.size() - t.order_of_key(i.second);

			t.insert(i.second);
		}
		cout << ans << endl;
	}
	return 0;
}
