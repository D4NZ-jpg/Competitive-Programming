// Problem: G. XOUR
// Contest: Codeforces - Codeforces Round 944 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1971/G
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 16-05-2024 19:15:31
// Duration: 0:10:48
// End: 2024-05-16 19:26:19
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;

		vector<ll> v(n);
		for (auto& i : v) cin >> i;

		map<ll, priority_queue<ll, vector<ll>, greater<ll>>> q;

		for (const ll& x : v) q[x >> 2].push(x);

		for (const ll& i : v) {
			cout << q[i >> 2].top() << ' ';
			q[i >> 2].pop();
		}
		cout << endl;
	}

	return 0;
}
