// Problem: B. Prefiquence
// Contest: Codeforces - Codeforces Round 943 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1968/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-05-2024 08:54:20
// Duration: 0:11:10
// End: 2024-05-02 09:05:30
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
bool check(string& a, string& b, ll k) {
	string prefix = a.substr(0, k);

	ll ai = 0;
	for (char& c : b) {
		if (ai >= k) break;
		if (prefix[ai] == c) ai++;
	}

	return ai == k;
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
		ll n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;

		ll l = 0, r = min(n, m);
		while (l < r) {
			ll k = (l + r + 1) / 2;
			if (check(a, b, k)) l = k;
			else
				r = k - 1;
		}

		cout << l << endl;
	}

	return 0;
}
