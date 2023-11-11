// Problem: A. Almost Increasing Subsequence
// Contest: Codeforces - Codeforces Round 869 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1817/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 28-10-2023 12:49:41
// Duration: 4:50:00
// End: 2023-10-28 17:39:41
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

	ll n, q;
	cin >> n >> q;
	vector<ll> v(n), arr(n);

	for (ll& i : v) cin >> i;

	for (int i = 1; i < n - 1; i++)
		arr[i] = arr[i - 1] + (v[i - 1] >= v[i] && v[i] >= v[i + 1]);

	arr[n - 1] = arr[n - 2];

	for (ll& i : arr) cerr << i << ' ';

	while (q--) {
		int l, r;
		cin >> l >> r;

		l--, r--;

		if (l == r) cout << 1 << endl;
		else
			cout << (r - l + 1) - (arr[r - 1] - (l ? arr[l] : 0))
			     << endl;
	}

	return 0;
}
