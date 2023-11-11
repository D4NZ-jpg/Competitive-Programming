// Problem: A. Jamie and Alarm Snooze
// Contest: Codeforces - Codeforces Round #457 (Div. 2)
// URL: https://codeforces.com/problemset/problem/916/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// // Powered by CP Editor (https: cpeditor.org)
// Duration: None
// End: 2022-12-19 17:14:15
// Rating: 900
#include <bits/stdc++.h>
using namespace std;

bool isLucky(int h, int m) {
	while (h)
		if (h % 10 == 7) return true;
		else
			h /= 10;
	while (m)
		if (m % 10 == 7) return true;
		else
			m /= 10;
	return false;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int x, h, m;
	cin >> x >> h >> m;

	int i = 0;
	for (i; !isLucky(h, m); i++) {
		m -= x;
		if (m < 0) {
			m += 60;
			if (--h < 0) h = 23;
		}
	}
	cout << i;
	return 0;
}