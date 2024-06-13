// Problem: D. Permutation Game
// Contest: Codeforces - Codeforces Round 943 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1968/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-05-2024 09:41:27
// Duration: 0:43:25
// End: 2024-05-02 10:24:52
// Rating: 1300
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

ll get(ll pos, ll k, const vector<ll>& p, const vector<ll>& a,
       vector<bool>& vis) {
	if (k <= 0 || vis[pos]) return INT_MIN;
	vis[pos] = true;

	ll stay = a[pos] * k;

	ll go = a[pos] + get(p[pos] - 1, k - 1, p, a, vis);

	return max(stay, go);
}

void solve() {
	ll n, k, pb, ps;
	cin >> n >> k >> pb >> ps;
	vector<ll> v(n), a(n);

	for (auto& i : v) cin >> i;
	for (auto& i : a) cin >> i;

	ll x, y;
	{
		vector<bool> vis(n);
		x = get(pb - 1, k, v, a, vis);
	}
	{
		vector<bool> vis(n);
		y = get(ps - 1, k, v, a, vis);
	}
	cerr << x << ' ' << y << endl;

	if (x == y) cout << "Draw" << endl;
	else if (x > y)
		cout << "Bodya" << endl;
	else
		cout << "Sasha" << endl;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) { solve(); }

	return 0;
}
