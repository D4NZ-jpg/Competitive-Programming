// Problem: G1. Dances (Easy version)
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/G1
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// Start: 14-12-2023 20:43:02
// Duration: 0:18:55
// End: 2023-12-14 21:01:57
// Rating: 1400
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
		vector<ll> a(n), b(n);
		a[0] = 1;

		for (int i = 1; i < n; i++) cin >> a[i];
		for (auto& i : b) cin >> i;

		sort(all(a));
		sort(all(b));

		ll ans = 0, l = 0, r = 0, cutoff = n;
		while (l < cutoff && r < n) {
			while (a[l] >= b[r] && l < cutoff && r < n)
				ans++, cutoff--, r++;
			l++, r++;
		}
		cout << ans << endl;
	}
	return 0;
}

/*

1 2 3 4 5 6 7 8 9 
1 1 2 2 3 4 5 5 6 

1 2 3 4 5
3 4 5 5 6 


1 1 5
3 3 8

*/
