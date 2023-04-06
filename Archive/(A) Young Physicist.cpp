// Problem: A. Young Physicist
// Contest: Codeforces Beta Round 63 (Div. 2)
// URL: https://codeforces.com/contest/69/problem/A
// Rating: 1000

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int x = 0, y = 0, z = 0;
	for (int i = 0; i < n; i++) {
		int x2 = 0, y2 = 0, z2 = 0;
		cin >> x2 >> y2 >> z2;
		x += x2;
		y += y2;
		z += z2;
	}
	if (!x && !y && !z) cout << "YES";
	else
		cout << "NO";
	return 0;
}
