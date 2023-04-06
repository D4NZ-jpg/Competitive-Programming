// Problem: B. Atilla's Favorite Problem
// Contest: Codeforces Round 835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/B
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		int    n;
		string s;

		cin >> n >> s;

		int maxChar = 0;
		for (char c : s)
			if (c > maxChar) maxChar = c;

		cout << maxChar - 'a' + 1 << '\n';
	}
	return 0;
}
