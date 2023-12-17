// Problem: C. Largest Subsequence
// Contest: Codeforces - Codeforces Round 915 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1905/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 16-12-2023 09:22:44
// Duration: 1:07:57
// End: 2023-12-16 10:30:41
// Rating: None
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

ll solve() {
	ll n;
	cin >> n;
	string s;
	cin >> s;

	set<ll> sub;
	ll      cnt = 0;

	// subsequence ======

	char last = 'a' - 1;
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] < last) continue;

		cnt++;
		if (last != s[i]) cnt = 1;

		last = s[i];
		sub.insert(i);
	}

	// swap =============

	string ns  = s;
	auto   idx = sub.rbegin();

	for (int i = 0; i < n; i++) {
		if (!sub.count(i)) continue;

		ns[i] = s[*idx];
		idx++;
	}

	// check valid=======

	for (int i = 1; i < n; i++)
		if (ns[i] < ns[i - 1]) return -1;

	return sub.size() - cnt;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
