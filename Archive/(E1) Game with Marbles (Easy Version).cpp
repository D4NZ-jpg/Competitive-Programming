// Problem: E1. Game with Marbles (Easy Version)
// Contest: Codeforces - Codeforces Round 916 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1914/E1
// Memory Limit: 256 MB
// Time Limit: 3500 ms
// Start: 20-12-2023 12:46:57
// Duration: 2:10:46
// End: 2023-12-20 14:57:43
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
		vector<ll> a(n), b(n);
		ll         score = 0;

		for (ll& i : a) cin >> i;
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			score -= b[i] - 1;
			b[i] += a[i];
		}
		sort(all(b), greater<ll>());
		for (int i = 0; i < n; i++)
			if (i % 2) continue;
			else
				score += b[i] - 2;

		cout << score << endl;
	}

	return 0;
}
