// Problem: C. Ticket Hoarding
// Contest: Codeforces - Codeforces Global Round 25
// URL: https://codeforces.com/problemset/problem/1951/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 06-04-2024 09:21:20
// Duration: 1:32:31
// End: 2024-04-06 10:53:51
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

ll solve() {
	ll n, m, k;
	cin >> n >> m >> k;

	vector<ll> prices;
	ll         days;
	{  // 2(N+NlogN)
		vector<pll> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i].first, v[i].second = i;
		sort(all(v));
		days = (k + m - 1) / m;

		vector<pll> bought(days);
		for (int i = 0; i < days; i++)
			bought[i] = {v[i].second, v[i].first};

		sort(all(bought));

		for (auto& i : bought) prices.pb(i.second);
	}

	ll res = (k % m ? k % m : m);

	ll   ans = 0, x = 0;
	bool passedMax = false;
	ll   maxe      = *max_element(all(prices));

	for (int i = 0; i < prices.size(); i++)
		if (passedMax || prices[i] != maxe)
			ans += (prices[i] + x) * m, x += m;
		else
			ans += (prices[i] + x) * res, x += res, passedMax = true;

	return ans;
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
