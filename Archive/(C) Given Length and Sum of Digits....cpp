// Problem: C. Given Length and Sum of Digits...
// Contest: Codeforces Round 277.5 (Div. 2)
// URL: https://codeforces.com/contest/489/problem/C
// Rating: 1400

#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

string findMin(int m, int s) {
	string minS  = "";
	bool   first = true;

	while (m--) {
		int dis = min(9, max(0, s - m * 9));
		if (first && m) dis = max(1, dis);

		s -= dis;
		minS += char('0' + dis);
		first = false;
	}

	if (s) return "-1";
	return minS;
}

string findMax(int m, int s) {
	string maxS = "";
	if (m > 1 && !s) return "-1";

	while (m--) {
		maxS += char('0' + min(9, s));
		s -= min(9, s);
	}

	if (s) return "-1";
	return maxS;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int m, s;
	cin >> m >> s;

	cout << findMin(m, s) << ' ' << findMax(m, s);
	return 0;
}