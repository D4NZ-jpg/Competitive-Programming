// Problem: D. Bracket Coloring
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1837/D
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Start: 16-12-2023 20:45:47
// Duration: 12:01:55
// End: 2023-12-17 08:47:42
// Rating: 1400
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

bool isValid(string& s) {
	stack<char> st;
	for (char& c : s) {
		if (c == '(') st.push(c);
		else if (st.empty())
			return false;
		else if (st.top() == '(')
			st.pop();
		else
			return false;
	}

	return st.empty();
}

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

		string s, ns;
		cin >> s;
		ns = s;

		ll balance = 0, last = 0;
		for (int i = 0; i < n; i++) {
			char& c = s[i];
			if (c == '(') balance++;
			else
				balance--;

			ns[i] = (s[last] == '(' ? '1' : '2');
			if (!balance && i != n) last = i + 1;
		}

		if (balance) {
			cout << -1 << endl;
			continue;
		}

		string rs = s;
		reverse(all(s));

		if (isValid(s) || isValid(rs)) {
			cout << 1 << endl;
			for (int i = 0; i < n; i++) cout << 1 << ' ';
			cout << endl;
			continue;
		}

		cout << 2 << endl;
		for (char& c : ns) cout << c << ' ';
		cout << endl;
	}

	return 0;
}
