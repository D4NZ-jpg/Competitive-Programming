// Problem: B. Plus-Minus Split
// Contest: Codeforces - Hello 2024
// URL: https://codeforces.com/problemset/problem/1919/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 06-01-2024 08:38:25
// Duration: 0:06:21
// End: 2024-01-06 08:44:46
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
		ll     n;
		string s;
		cin >> n >> s;

		ll sum = 0;
		for (char& c : s)
			if (c == '+') sum++;
			else
				sum--;

		cout << abs(sum) << endl;
	}

	return 0;
}
