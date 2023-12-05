// Problem: B. YetnotherrokenKeoard
// Contest: Codeforces - Codeforces Round 913 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1907/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 05-12-2023 08:49:22
// Duration: 0:11:01
// End: 2023-12-05 09:00:23
// Rating: None
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

	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		stack<pair<char, int>> l, u;

		for (int i = 0; i < s.size(); i++) {
			char c = s[i];

			if (c == 'b') {
				if (l.size()) l.pop();
				continue;
			}

			if (c == 'B') {
				if (u.size()) u.pop();
				continue;
			}

			if (c >= 'a' && c <= 'z') l.push({c, i});
			else
				u.push({c, i});
		}

		string out = "";
		while (l.size() && u.size()) {
			auto a = l.top(), b = u.top();
			if (a.second > b.second) {
				out += a.first;
				l.pop();
			} else {
				out += b.first;
				u.pop();
			}
		}

		while (l.size()) {
			out += l.top().first;
			l.pop();
		}

		while (u.size()) {
			out += u.top().first;
			u.pop();
		}

		for (int i = out.size() - 1; i >= 0; i--) cout << out[i];
		cout << endl;
	}

	return 0;
}
