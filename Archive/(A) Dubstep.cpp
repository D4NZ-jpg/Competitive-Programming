// Problem: A. Dubstep
// Contest: Codeforces - Codeforces Round 130 (Div. 2)
// URL: https://codeforces.com/problemset/problem/208/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 11-02-2024 18:15:42
// Duration: 0:09:01
// End: 2024-02-11 18:24:43
// Rating: 900
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

	string ans = "", curr = "", s;
	cin >> s;
	for (char& c : s) {
		curr += c;

		string end = curr.substr(max(0ll, ll(curr.size() - 3)), 3);
		if (end == "WUB") {
			ans +=
			  curr.substr(0, max(0ll, ll(curr.size() - 3))) + ' ';
			curr = "";
		}
	}

	ans += curr;
	cerr << curr << endl;
	cout << ans << endl;

	return 0;
}
