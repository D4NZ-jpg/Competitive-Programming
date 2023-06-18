// Problem: B. Keep it Beautiful
// Contest: Codeforces - Educational Codeforces Round 150 (Rated for
// URL: https://codeforces.com/contest/1841/problem/B
// Rating: 1000

#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int64_t first, last, tmp;
		bool    flipped = false;

		cin >> first;
		last = first;

		cout << 1;
		while (--n) {
			cin >> tmp;

			if (!flipped) {
				if (tmp < last)
					if (tmp <= first) {
						flipped = true;
						cout << 1;
						last = tmp;
					} else
						cout << 0;
				else {
					last = tmp;
					cout << 1;
				}
				continue;
			}

			if (tmp <= first && tmp >= last) {
				cout << 1;
				last = tmp;
				continue;
			}
			cout << 0;
		}
		cout << '\n';
	}
	return 0;
}
