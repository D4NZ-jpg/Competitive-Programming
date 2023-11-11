// Problem: C. Queries for the Array
// Contest: Codeforces - Educational Codeforces Round 154 (Rated for
// Div. 2) URL: https://codeforces.com/problemset/problem/1861/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 21-10-2023 14:36:22
// Duration: 17:11:56
// End: 2023-10-22 07:48:18
// Rating: 1600
// URL: https://codeforces.com/problemset/problem/1861/C
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'
bool solve() {
	string s;
	cin >> s;
	int curr = 0, shortest_unsorted = 0, longest_sorted = 0;
	for (char& c : s) {
		if (c == '+') curr++;

		else if (c == '-') {
			curr--;
			longest_sorted = min(longest_sorted, curr);
			if (curr < shortest_unsorted) shortest_unsorted = 0;
			continue;
		}

		else if (c == '1')
			longest_sorted = max(longest_sorted, curr);
		else {
			if (curr < 2) return false;
			if (!shortest_unsorted || shortest_unsorted > curr)
				shortest_unsorted = curr;
		}

		if (shortest_unsorted <= longest_sorted && shortest_unsorted)
			return false;
	}
	return true;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		if (solve()) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
