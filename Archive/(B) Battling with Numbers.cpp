// Problem: B. Battling with Numbers
// Contest: Codeforces - COMPFEST 15 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1866/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 17-12-2023 14:40:41
// Duration: 1:22:54
// End: 2023-12-17 16:03:35
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
#define MOD       998244353

void getInput(map<ll, ll>& m, set<ll>& primes) {
	ll n;
	cin >> n;
	queue<ll> q;

	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		q.push(j);
		primes.insert(j);
	}

	while (q.size()) {
		ll j;
		cin >> j;
		m[q.front()] = j;
		q.pop();
	}
}

ll binPow(ll a, ll b) {
	ll ans = 1;
	while (b) {
		if (b & 1) ans = ans * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}

	return ans % MOD;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	map<ll, ll> a, b;
	set<ll>     primes;
	getInput(a, primes);
	getInput(b, primes);

	ll ans = 0;
	for (const ll& i : primes) {
		if (a[i] < b[i]) {
			cout << 0;
			return 0;
		}
		if (a[i] > b[i]) ans++;
	}

	cout << binPow(2, ans);
	return 0;
}
