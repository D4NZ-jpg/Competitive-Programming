// Problem: B. Battle Cows
// Contest: Codeforces - Codeforces Global Round 25
// URL: https://codeforces.com/problemset/problem/1951/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-04-2024 08:41:13
// Duration: 0:40:09
// End: 2024-04-06 09:21:22
// Rating: 1200
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

ll getScore(vector<ll>& v, ll k) {
	ll ans = 0, maxe = -1;
	for (int i = 0; i < k; i++) maxe = max(v[i], maxe);

	if (maxe > v[k]) return 0;
	ans = (k > 0);
	for (int i = k + 1; i < v.size(); i++) {
		if (v[i] < v[k]) ans++;
		else
			break;
	}

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
	while (tc--) {
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		// first
		swap(v[0], v[k - 1]);
		ll a = getScore(v, 0);
		swap(v[0], v[k - 1]);

		// first bigger
		ll x = 0;
		for (int i = 0; i < n; i++)
			if (v[i] > v[k - 1]) {
				x = i;
				break;
			}
		swap(v[x], v[k - 1]);
		ll b = getScore(v, x);

		cout << max(a, b) << endl;
	}

	return 0;
}
