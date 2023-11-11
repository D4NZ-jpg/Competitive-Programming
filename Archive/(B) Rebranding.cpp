// Problem: B. Rebranding
// Contest: Codeforces - Codeforces Round #327 (Div. 2)
// URL: https://codeforces.com/problemset/problem/591/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 05-01-2023 11:59:06
// Duration: 1:23:00
// End: 2023-01-05 13:22:06
// Rating: 1200
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;

	map<char, char> changes;
	while (m--) {
		char a, b;
		cin >> a >> b;
		if (a == b) continue;
		for (auto& i : changes)
			if (i.second == a) i.second = b;
			else if (i.second == b)
				i.second = a;

		if (!changes.count(a)) changes[a] = b;
		if (!changes.count(b)) changes[b] = a;
	}

	for (auto& i : s) cout << (changes.count(i) ? changes[i] : i);

	return 0;
}