// Problem: A. Chat room
// Contest: Codeforces Beta Round #54 (Div. 2)
// URL: https://codeforces.com/contest/58/problem/A
// Rating: 1000

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	string hello = "hello";
	int    ptr   = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == hello[ptr])
			if (++ptr >= hello.size()) {
				cout << "YES";
				return 0;
			}
	}
	cout << "NO";
	return 0;
}
