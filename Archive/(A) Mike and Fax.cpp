// Problem: A. Mike and Fax
// Contest: Codeforces - Codeforces Round #305 (Div. 2)
// URL: https://codeforces.com/problemset/problem/548/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Rating: 1100

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string s;
	int    k;
	cin >> s >> k;

	if (s.size() % k) {
		cout << "NO";
		return 0;
	}

	k = s.size() / k;
	for (int i = 0; i < s.size(); i += k)
		for (int j = 0; j < k / 2; j++)
			if (s[i + j] != s[i + k - j - 1]) {
				cout << "NO";
				return 0;
			}

	cout << "YES";
	return 0;
}