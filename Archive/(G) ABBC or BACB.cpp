// Problem: G. ABBC or BACB
// Contest: Codeforces - Codeforces Round 898 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1873/G
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 17-10-2023 18:26:43
// for (auto& i : g) cerr << i << ' ';
// Duration: 1:14:34
// End: 2023-10-17 19:41:17
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

int getGroups(vector<int>& g, string& s) {
	int n = s[0] == 'A', bmax = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			n++;
			continue;
		}

		if (s[i - 1] == 'A') g.pb(n);
		else
			bmax = max(bmax, n);

		n = 1;
	}
	if (s[s.size() - 1] == 'A') g.pb(n);
	return bmax;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		// cerr << "===========\n";

		string s;
		cin >> s;
		if (s[s.size() - 1] == 'B') reverse(all(s));

		vector<int> g;
		int         bmax = getGroups(g, s);
		int64_t     sum  = 0;

		if (s[0] == 'B' || bmax > 1)
			for (auto& i : g) sum += i;
		else {
			int imin = INT_MAX;
			for (auto& i : g) imin = min(i, imin);

			bool j = false;

			for (auto& i : g) {
				if (i == imin && !j) {
					j = true;
					continue;
				}

				sum += i;
			}
		}
		cout << sum << endl;

		// for (auto& i : g) cerr << i << ' ';
		// cerr << endl;
	}

	return 0;
}
