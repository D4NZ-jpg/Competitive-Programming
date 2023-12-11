// Problem: D. Ones and Twos
// Contest: Codeforces - CodeTON Round 7 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1896/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 10-12-2023 10:20:22
// Duration: 1:15:11
// End: 2023-12-10 11:35:33
// Rating: 1700
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

bool check(ll& val, set<ll>& ones, vector<ll>& v) {
	ll oneCnt = ones.size(), sum = 2 * v.size() - oneCnt;

	if (val % 2 == sum % 2) return sum >= val;
	if (!oneCnt) return false;

	// left side subarray (with different parity)
	ll a = 2 * *ones.rbegin() - (oneCnt - 1);
	// right side subarray
	ll b = 2 * (v.size() - 1 - *ones.begin()) - (oneCnt - 1);
	return max(a, b) >= val;
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
		ll n, q;
		cin >> n >> q;

		vector<ll> v(n);
		set<ll>    ones;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] == 1) ones.insert(i);
		}

		while (q--) {
			ll op;
			cin >> op;

			if (op == 1) {
				ll val;
				cin >> val;
				if (check(val, ones, v)) cout << "YES" << endl;
				else
					cout << "NO" << endl;
			} else {
				ll idx;
				cin >> idx;
				ones.erase(--idx);
				cin >> v[idx];
				if (v[idx] == 1) ones.insert(idx);
			}
		}
	}

	return 0;
}
