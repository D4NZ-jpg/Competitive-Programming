// Problem: A. Add Plus Minus Sign
// Contest: Polynomial Round 2022 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1774/problem/A
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		string s, out = "";
		cin >> s;

		int sum = 0;
		sum += s[0] - '0';
		for (int i = 1; i < n; i++) {
			if (sum <= 0) {
				sum += s[i] - '0';
				out += '+';
			} else {
				sum -= s[i] - '0';
				out += '-';
			}
		}
		cout << out << '\n';
	}
	return 0;
}
