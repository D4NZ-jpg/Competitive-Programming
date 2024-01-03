// Problem: C. Training Before the Olympiad
// Contest: Codeforces - Good Bye 2023
// URL: https://codeforces.com/problemset/problem/1916/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-12-2023 09:42:21
// Duration: 0:48:13
// End: 2023-12-30 10:30:34
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
		ll         sum = 0, odds = 0, evens = 0;
		for (auto& i : v) {
			cin >> i;

			sum += i;
			if (i % 2) odds++;
			else
				evens++;

			ll res = odds / 3;
			if (odds == 1 && !evens) res = 0;
			else if (odds % 3 == 1)
				res = (odds + 2) / 3;

			cout << sum - res << ' ';
		}
		cout << endl;
	}

	return 0;
}
