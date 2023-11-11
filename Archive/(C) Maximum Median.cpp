// Problem: C. Maximum Median
// Contest: Codeforces - Codeforces Round 577 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1201/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 23-09-2023 10:25:51
// Duration: 1:46:40
// End: 2023-09-23 12:12:31
// Rating: 1400
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

// v, should be sorted
bool valid(vector<int64_t>& v, int64_t k, int64_t q) {
	int64_t mid = (v.size() - 1) / 2;
	int64_t sum = 0;
	for (int64_t i = mid; i < v.size(); i++)
		if (v[mid] + q - v[i] > 0) sum += v[mid] + q - v[i];
	return sum <= k;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int64_t n, k, cnt = 0;
	cin >> n >> k;
	vector<int64_t> v(n);
	for (int64_t i = 0; i < n; i++) cin >> v[i];

	sort(all(v));

	int64_t mid, l = 0, r = k;
	while (l < r) {
		mid = (l + r + 1) / 2;
		if (valid(v, k, mid)) {
			l = mid;
		} else
			r = mid - 1;
	}

	cout << v[(n - 1) / 2] + l << endl;
	return 0;
}
