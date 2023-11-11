// Problem: C. Make it Alternating
// Contest: Codeforces - Educational Codeforces Round 155 (Rated for
// Div. 2) URL: https://codeforces.com/problemset/problem/1879/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 17-10-2023 16:31:46
// Duration: 1:52:24
// End: 2023-10-17 18:24:10
// Rating: 1300
// URL: https://codeforces.com/problemset/problem/1879/C
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
#define MOD       998244353

int64_t facts[10000000];
int64_t fact(int n) {
	facts[0] = facts[1] = 1;
	for (int i = 2; i <= n; i++) facts[i] = facts[i - 1] * i % MOD;
	return facts[n];
}

void getGroups(string& s, vector<int>& g) {
	int n = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			n++;
			continue;
		}
		g.push_back(n);
		n = 1;
	}
	g.push_back(n);
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	for (int i = 0; i < 10000000; i++) facts[i] = -1;

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		vector<int> groups;
		getGroups(s, groups);

		int64_t k      = s.size() - groups.size();
		int64_t fixeds = 1;
		for (auto& i : groups) fixeds = fixeds * i % MOD;

		cerr << fixeds << ' ' << fact(k) << endl;
		cout << k << ' ' << fixeds * fact(k) % MOD << endl;
	}
	return 0;
}
