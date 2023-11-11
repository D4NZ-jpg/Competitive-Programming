// Problem: A. Nearly Lucky Number
// Contest: Codeforces - Codeforces Beta Round #84 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/110/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Duration: None
// End: 2022-12-19 20:19:34
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	uint64_t n, counter = 0;
	cin >> n;

	while (n) {
		if (n % 10 == 4 || n % 10 == 7) counter++;
		n /= 10;
	}

	do {
		if (!(counter % 10 == 4 || counter % 10 == 7)) {
			cout << "NO";
			return 0;
		};
		counter /= 10;
	} while (counter);

	cout << "YES";

	return 0;
}