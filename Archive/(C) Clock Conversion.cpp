// Problem: C. Clock Conversion
// Contest: Codeforces - Codeforces Round 937 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1950/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 01-04-2024 12:53:43
// Duration: 0:11:44
// End: 2024-04-01 13:05:27
// Rating: 800
#include <bits/stdc++.h>

#include <cstdlib>
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
		string time;
		cin >> time;

		ll hour = atoi(time.substr(0, 2).c_str());
		ll h =
		  (hour != 12 && hour != 24 && hour != 0 ? hour % 12 : 12);
		cout << (h < 10 ? "0" : "") << h << time.substr(2, 3) << ' '
		     << (hour < 12 ? "AM" : "PM") << endl;
	}

	return 0;
}
