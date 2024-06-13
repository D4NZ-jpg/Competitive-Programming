// Problem: D. GCD and MST
// Contest: Codeforces - Divide by Zero 2021 and Codeforces Round 714 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1513/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 01-04-2024 10:14:50
// Duration: 13:50:00
// End: 2024-04-02 00:04:50
// Rating: 2000
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

struct DSU {
  private:
	vector<ll> G;

  public:
	ll components;

	DSU(ll x) : G(x + 1, -1), components(x) {}

	ll p(ll x) {
		if (G[x] < 0) return x;
		return G[x] = p(G[x]);
	}

	bool merge(ll x, ll y) {
		ll a = p(x), b = p(y);
		if (a == b) return false;

		if (-G[a] < -G[b]) swap(a, b);
		G[a] += G[b];
		G[b] = a;

		components--;
		return true;
	}
};

class SparseTable {
  private:
	const ll             lvls = 18;
	vector<vector<ll>>   t;
	function<ll(ll, ll)> f;

  public:
	SparseTable(vector<ll>& v, function<ll(ll, ll)> g) :
	    f(g),
	    t(lvls, vector<ll>(v.size(), -1)) {
		const ll n = v.size();

		for (ll i = 0; i < n; i++) t[0][i] = v[i];

		for (ll l = 1; l < lvls; l++)
			for (ll i = 0; i + (1 << l) <= n; i++)
				t[l][i] =
				  f(t[l - 1][i], t[l - 1][i + (1 << (l - 1))]);
	}

	ll query(ll l, ll r) {
		ll tmp = r - l + 1, k = 0;
		while (tmp > 1) k++, tmp >>= 1;

		return f(t[k][l], t[k][r - (1 << k) + 1]);
	}
};

ll solve() {
	ll n, p;
	cin >> n >> p;
	vector<pll> v(n);
	vector<ll>  a(n);

	for (ll i = 0; i < n; i++) {
		cin >> v[i].first;
		a[i]        = v[i].first;
		v[i].second = i;
	}

	sort(all(v));
	DSU dsu(n);
	//SparseTable gcdT(a, [](ll x, ll y) { return gcd(x, y); });

	ll ans = 0;
	for (ll i = 0; i < n && v[i].first < p; i++) {
		ll trgt = v[i].first;

		for (int j = v[i].second + 1; j < n && a[j] % trgt == 0; j++)
			if (dsu.merge(v[i].second, j)) ans += trgt;
			else
				break;

		for (int j = v[i].second - 1; j >= 0 && a[j] % trgt == 0; j--)
			if (dsu.merge(v[i].second, j)) ans += trgt;
			else
				break;
	}
	return (dsu.components - 1) * p + ans;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll tc;
	cin >> tc;
	while (tc--) cout << solve() << endl;

	return 0;
}
