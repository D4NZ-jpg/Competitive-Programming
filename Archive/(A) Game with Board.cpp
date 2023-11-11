// Problem: A. Game with Board
// Contest: Codeforces - Educational Codeforces Round 150 (Rated for
// Div. 2) URL: https://codeforces.com/contest/1841/problem/A Memory
// Limit: 512 MB Time Limit: 2000 ms Start: 17-06-2023 14:40:10
// Duration: None
// End: 2023-06-17 14:54:29
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1841/A
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

	short t;
	cin >> t;
	while (t--) {
		short n;
		cin >> n;
		if (n <= 4) cout << "Bob\n";
		else
			cout << "Alice\n";
	}

	return 0;
}

/*
2: Bob
3: Bob
4: Bob
5: Alice
6: Alice
7: Alice


A: 1 1 1 1 1 1 1 1
B: 5 1 1
A: 5 2

*/