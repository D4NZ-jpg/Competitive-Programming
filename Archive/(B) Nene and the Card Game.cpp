// Problem: B. Nene and the Card Game
// Contest: Codeforces - Codeforces Round 939 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1956/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-04-2024 08:47:44
// Duration: 0:13:31
// End: 2024-04-13 09:01:15
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

ll solve() {
	ll n;
	cin >> n;

	vector<ll> a(n + 1), b(n + 1);
	ll         spareA = 0, spareB = 0, singleB = 0, singleA = 0;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a[x]++;
	}
	for (int i = 1; i <= n; i++) {
		b[i] = 2 - a[i];
		if (b[i] == 2) spareB++;
		else
			singleB++;

		if (a[i] == 2) spareA++;
		else
			singleA++;
	}
	ll score = spareA;
	if (spareA > spareB) score += abs(singleA - singleB);

	return score;
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
