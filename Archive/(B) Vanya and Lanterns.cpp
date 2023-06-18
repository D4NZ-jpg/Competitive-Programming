// Problem: B. Vanya and Lanterns
// Contest: Codeforces - Codeforces Round 280 (Div. 2)
// URL: https://codeforces.com/problemset/problem/492/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 13-06-2023 21:52:32
// End: 13-06-2023 22:48:50
// Duration: 0:56:18
// Rating: 1200

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
	int n, l;
	cin >> n >> l;
	vector<int> lights(n);

	for (int i = 0; i < n; i++) cin >> lights[i];

	sort(all(lights));

	double maxDis = max(lights[0], l - lights[n - 1]);

	for (int i = 1; i < n; i++) {
		double tmp = double(lights[i] - lights[i - 1]) / 2;
		if (tmp > maxDis) maxDis = tmp;
	}

	cout.precision(20);
	cout << fixed << maxDis;
	return 0;
}