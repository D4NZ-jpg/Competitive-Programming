// Problem: B. Maximum Strength
// Contest: Codeforces - Codeforces Round 879 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1834/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 19-06-2023 21:45:50
// Duration: 0:32:45
// End: 2023-06-19 22:18:35
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

	short t;
	cin >> t;
	while (t--) {
		string l, r;
		cin >> l >> r;

		if (l.size() > r.size())
			r.insert(0, l.size() - r.size(), '0');
		if (r.size() > l.size())
			l.insert(0, r.size() - l.size(), '0');

		bool     changed = false;
		uint64_t out     = 0;

		for (int i = 0; i < max(l.size(), r.size()); i++) {
			int a = l[i] - '0', b = r[i] - '0';
			if (!changed) out += abs(a - b);
			else
				out += 9;
			if (a != b) changed = true;
		}

		cout << out << '\n';
	}
	return 0;
}