// Problem: C. Long Multiplication
// Contest: Codeforces - Educational Codeforces Round 164 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1954/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-05-2024 08:11:54
// Duration: 0:06:50
// End: 2024-05-02 08:18:44
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
		string a, b;
		cin >> a >> b;

		bool x = false;
		for (int i = 0; i < a.size(); i++) {
			if (x && a[i] > b[i]) swap(a[i], b[i]);
			if (!x && b[i] > a[i]) {
				swap(a[i], b[i]);
				x = true;
			}
			if (!x && a[i] > b[i]) x = true;
		}
		cout << a << endl << b << endl;
	}

	return 0;
}
