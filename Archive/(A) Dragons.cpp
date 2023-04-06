// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round 142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 18-03-2023 15:23:39
// End: 18-03-2023 15:28:53
// Duration: 0:05:14
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

	int s, n;
	cin >> s >> n;
	vector<pair<int, int>> dragons(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		dragons[i] = {x, y};
	}

	sort(all(dragons));

	for (auto& i : dragons)
		if (s > i.first) s += i.second;
		else {
			cout << "NO";
			return 0;
		}

	cout << "YES";

	return 0;
}