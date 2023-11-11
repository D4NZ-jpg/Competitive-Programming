// Problem: E. Tracking Segments
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1843/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 20-06-2023 08:35:48
// Duration: 1 day, 15:25:45
// End: 2023-06-22 00:01:33
// Rating: 1600
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
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;

		int idx = 0;

		vector<int>         arr(n + 1);
		set<pair<int, int>> ranges;

		while (m--) {
			int a, b;
			cin >> a >> b;
			ranges.insert({min(a, b), max(a, b)});
		}

		int q;
		cin >> q;

		vector<int> updates(q);
		for (int i = 0; i < q; i++) cin >> updates[i];

		int l = 1, r = q;

		while (r != l) {
			int trgt = (l + r) / 2;
			while (idx != trgt)
				if (idx < trgt) arr[updates[idx++]] = 1;
				else
					arr[updates[--idx]] = 0;

			vector<int> tmp = arr;

			for (int i = 2; i < n + 1; i++) tmp[i] += tmp[i - 1];

			bool found = false;
			for (auto& i : ranges)
				if (tmp[i.second] - tmp[i.first - 1]
				    > (i.second - i.first + 1) / 2) {
					found = true;
					break;
				}

			if (found) r = trgt;

			else
				l = trgt + 1;
		}

		if (l == q) {
			int trgt = (l + r) / 2;
			while (idx != trgt)
				if (idx < trgt) arr[updates[idx++]] = 1;
				else
					arr[updates[--idx]] = 0;

			vector<int> tmp = arr;

			for (int i = 2; i < n + 1; i++) tmp[i] += tmp[i - 1];

			bool found = false;
			for (auto& i : ranges)
				if (tmp[i.second] - tmp[i.first - 1]
				    > (i.second - i.first + 1) / 2) {
					found = true;
					break;
				}
			if (found) cout << l << '\n';
			else
				cout << "-1\n";

		} else
			cout << l << '\n';
	}
}