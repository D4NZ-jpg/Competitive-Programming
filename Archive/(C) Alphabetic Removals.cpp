// Problem: C. Alphabetic Removals
// Contest: Codeforces - Codeforces Round 490 (Div. 3)
// URL: https://codeforces.com/problemset/problem/999/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 20-06-2023 14:48:38
// End: 20-06-2023 15:06:21
// Duration: 0:17:43
// Rating: 1200

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

	int k, n;
	cin >> n >> k;
	string s;
	cin >> s;

	map<char, int> v;
	for (char& c : s) v[c]++;

	for (auto& i : v) {
		if (k <= 0) break;
		int tmp  = i.second;
		i.second = max(0, i.second - k);
		k -= tmp;
	}

	string out = "";
	for (auto it = s.rbegin(); it != s.rend(); it++)
		if (v[*it]-- > 0) out += *it;

	for (auto it = out.rbegin(); it != out.rend(); it++) cout << *it;
	return 0;
}