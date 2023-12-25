// Problem: A. Musical Puzzle
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1833/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 20-12-2023 09:35:15
// Duration: 0:03:26
// End: 2023-12-20 09:38:41
// Rating: 800
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
		string s;
		cin >> s;

		set<string> st;
		for (int i = 0; i < n - 1; i++) {
			string ns = "";
			ns += s[i];
			ns += s[i + 1];
			st.insert(ns);
		}

		cout << st.size() << endl;
	}

	return 0;
}
