// Problem: A. Laptops
// Contest: Codeforces - Codeforces Round 260 (Div. 2)
// URL: https://codeforces.com/problemset/problem/456/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 18-03-2023 17:58:54
// End: 18-03-2023 18:04:20
// Duration: 0:05:26
// Rating: 1100

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
	int n;
	cin >> n;

	vector<pair<int, int>> laps(n);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		laps[i] = {a, b};
	}
	sort(all(laps));
	auto best = laps[0].second;
	for (auto& i : laps)
		if (i.second < best) {
			cout << "Happy Alex";
			return 0;
		} else
			best = i.second;

	cout << "Poor Alex";

	return 0;
}