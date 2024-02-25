// Problem: B. Minimize Inversions
// Contest: Codeforces - Codeforces Round 922 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1918/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 14-02-2024 21:47:35
// Duration: 0:18:51
// End: 2024-02-14 22:06:26
// Rating: 900
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
		ll n;
		cin >> n;
		vector<pll> a(n), ap(n), b(n), bp(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i].first;
			a[i].second = i;
			ap[i]       = a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i].first;
			b[i].second = i;
			bp[i]       = b[i];
		}

		sort(all(ap));

		for (int i = 0; i < n; i++) bp[i] = b[ap[i].second];
		for (pll& i : ap) cout << i.first << ' ';
		cout << endl;
		for (pll& i : bp) cout << i.first << ' ';
		cout << endl;
	}

	return 0;
}
