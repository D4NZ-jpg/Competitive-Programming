// Problem: A. Sereja and Dima
// Contest: Codeforces - Codeforces Round #223 (Div. 2)
// URL: https://codeforces.com/problemset/problem/381/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Duration: None
// End: 2022-12-19 18:18:24
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	deque<int> cards;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		cards.push_back(j);
	};

	int  a = 0, b = 0;
	bool t = true;
	while (cards.size()) {
		int card = max(cards.front(), cards.back());
		cards.front() > cards.back() ? cards.pop_front()
		                             : cards.pop_back();
		t ? a += card : b += card;
		t = !t;
	}
	cout << a << ' ' << b;

	return 0;
}