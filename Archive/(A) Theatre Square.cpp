// Problem: A. Theatre Square
// Contest: Codeforces Beta Round #1
// URL: https://codeforces.com/contest/1/problem/A
// Rating: 1000

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	double m, n, a;
	cin >> n >> m >> a;
	int64_t x = ceil(n / a);
	int64_t y = ceil(m / a);
	cout << x * y;
	return 0;
}
