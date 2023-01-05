// Problem: A. k-String
// Contest: Codeforces - Codeforces Round #135 (Div. 2)
// URL: https://codeforces.com/problemset/problem/219/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Rating: 1000

#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string         s;
	int            k;
	map<char, int> chars;

	cin >> k >> s;
	if (s.size() % k) {
		cout << -1;
		return 0;
	}
	for (auto& i : s) chars[i]++;

	string subtr = "";
	for (auto& i : chars)
		if (i.second % k) {
			cout << -1;
			return 0;
		} else
			for (int j = 0; j < i.second / k; j++) subtr += i.first;

	for (int i = 0; i < k; i++) cout << subtr;
	return 0;
}