// Problem: A. Morning
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 25-10-2023 19:05:20
// Duration: 0:08:07
// End: 2023-10-25 19:13:27
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

inline int c(char c) {
	int num = c - '0';
	if (!num) return 10;
	return num;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		string pin;
		cin >> pin;

		int idx = 1, out = 0, curr = 1;

		for (int i = 0; i < 4; i++) {
			int num = c(pin[i]);
			out += 1 + abs(curr - num);
			curr = num;
		}
		cout << out << endl;
	}
	return 0;
}
