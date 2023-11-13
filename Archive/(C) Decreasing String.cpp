// Problem: C. Decreasing String
// Contest: Codeforces - Educational Codeforces Round 156 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1886/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 12-11-2023 14:04:07
// Duration: 3:25:04
// End: 2023-11-12 17:29:11
// Rating: 1600
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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
		string s;
		ll     pos;
		cin >> s >> pos;
		pos--;

		ll n = s.size();
		s += 'a' - 1;

		vector<char> st;
		for (char& c : s) {
			while (pos >= n && st.size() && st.back() > c)
				pos -= n--, st.pop_back();
			st.push_back(c);
		}

		if (pos < 0 || pos >= st.size()) cout << "OUT OF BOUNDS";
		cout << st[pos];
	}
	return 0;
}
