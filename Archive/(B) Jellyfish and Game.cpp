// Problem: B. Jellyfish and Game
// Contest: Codeforces - Codeforces Round 901 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1875/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-09-2023 08:41:03
// Duration: 0:37:43
// End: 2023-09-30 09:18:46
// Rating: 1200
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

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

	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		multiset<int> a, b;
		for (int i = 0; i < n; i++) {
			int j;
			cin >> j;
			a.insert(j);
		}
		for (int i = 0; i < m; i++) {
			int j;
			cin >> j;
			b.insert(j);
		}

		for (int i = 1; i <= min(k, 2 + k % 2); i++) {
			int bMin = *b.begin(), bMax = *--b.end(),
			    aMin = *a.begin(), aMax = *--a.end();
			if (i % 2 && (bMax > aMin)) {
				b.erase(--b.end());
				a.erase(a.begin());
				b.insert(aMin);
				a.insert(bMax);
			} else if (!(i % 2) && (aMax > bMin)) {
				b.erase(b.begin());
				a.erase(--a.end());
				b.insert(aMax);
				a.insert(bMin);
			}
		}

		int64_t sum = 0;
		for (auto& i : a) { sum += i; }
		cout << sum << endl;
	}

	return 0;
}
