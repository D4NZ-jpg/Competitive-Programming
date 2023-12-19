// Problem: A1. Dual (Easy Version)
// Contest: Codeforces - Codeforces Round 889 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1854/A1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 19-12-2023 08:58:26
// Duration: 1:11:50
// End: 2023-12-19 10:10:16
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
		ll n;
		cin >> n;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		ll nmin = 0, nmax = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] > v[nmax]) nmax = i;
			if (v[i] < v[nmin]) nmin = i;
		}

		vector<pll> ans;
		if (abs(v[nmax]) >= abs(v[nmin]))
			for (int i = 1; i < n; i++)
				while (v[i] < v[i - 1]) {
					ans.pb(make_pair(i, nmax));
					v[i] += v[nmax];
					if (v[i] > v[nmax]) nmax = i;
				}
		else
			for (int i = n - 2; i >= 0; i--)
				while (v[i] > v[i + 1]) {
					ans.pb(make_pair(i, nmin));
					v[i] += v[nmin];
					if (v[i] < v[nmin]) nmin = i;
				}

		cout << ans.size() << endl;
		for (pll& i : ans)
			cout << 1 + i.first << ' ' << 1 + i.second << endl;
	}
	return 0;
}
