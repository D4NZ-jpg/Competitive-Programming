// Problem: A. Lucky Division
// Contest: Codeforces - Codeforces Beta Round 91 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/122/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-03-2023 15:31:42
// End: 18-03-2023 15:45:43
// Duration: 0:14:01
// Rating: 1000

#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	const int ln[26] = {
	  4,   7,   40,  44,  47,  70,  74,  77,  400, 404, 407, 440, 444,
	  447, 470, 474, 477, 700, 704, 707, 740, 744, 747, 770, 774, 777,
	};

	int n;
	cin >> n;
	for (int i = 0; i < 26; i++)
		if (n % ln[i] == 0) {
			cout << "YES";
			return 0;
		}

	cout << "NO";
	return 0;
}