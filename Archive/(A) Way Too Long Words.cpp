// Problem: A. Way Too Long Words
// Contest: Codeforces Beta Round 65 (Div. 2)
// URL: https://codeforces.com/contest/71/problem/A
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.size() <= 10) {
			cout << s << '\n';
			continue;
		}
		cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
	}
	return 0;
}
