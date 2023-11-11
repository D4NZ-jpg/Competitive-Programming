// Problem: C. Counting Orders
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1828/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 09-11-2023 18:28:11
// Duration: 0:50:30
// End: 2023-11-09 19:18:41
// Rating: 1100
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll   = long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
#define MOD       1000000007

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll> a(n), b(n);

		for (ll& i : a) cin >> i;
		for (ll& i : b) cin >> i;

		sort(all(a), greater<ll>());
		sort(all(b), greater<ll>());

		ll total = 1, l = 0, r = 0, cnt = 0;
		for (int i = 0; i < n; i++) {
			ll curr = b[i];

			while (a[l] > curr && l < n) l++;

			ll poss = l - cnt;
			total   = total * poss % MOD;
			cnt++;
		}

		cout << total << endl;
	}

	return 0;
}
