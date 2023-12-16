// Problem: L. LOL Lovers
// Contest: Codeforces - 2023-2024 ICPC, NERC, Northern Eurasia Onsite (Unrated, Online Mirror, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1912/L
// Memory Limit: 1024 MB
// Time Limit: 3000 ms
// Start: 14-12-2023 12:41:36
// Duration: 0:04:01
// End: 2023-12-14 12:45:37
// Rating: 800
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

	ll n;
	cin >> n;
	string s;
	cin >> s;

	vector<ll> l(n), o(n);
	l[0] = s[0] == 'L';
	o[0] = s[0] == 'O';

	for (int i = 1; i < n; i++) {
		l[i] = l[i - 1];
		o[i] = o[i - 1];

		if (s[i] == 'L') l[i]++;
		else
			o[i]++;
	}

	for (int i = 0; i < n - 1; i++) {
		ll lBefore = l[i], lAfter = l[n - 1] - l[i];
		ll oBefore = o[i], oAfter = o[n - 1] - o[i];

		if (lBefore != lAfter && oBefore != oAfter) {
			cout << i + 1;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
