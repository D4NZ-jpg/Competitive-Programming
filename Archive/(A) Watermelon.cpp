// Problem: A. Watermelon
// Contest: Codeforces Beta Round #4 (Div. 2 Only)
// URL: https://codeforces.com/contest/4/problem/A
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int w;
	cin >> w;
	if (w <= 2) {
		cout << "NO";
		return 0;
	}
	if (w % 2 == 0) cout << "YES";
	else
		cout << "NO";
	return 0;
}
