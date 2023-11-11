// Problem: B. More Cowbell
// Contest: Codeforces - Codeforces Round #334 (Div. 2)
// URL: https://codeforces.com/problemset/problem/604/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 05-01-2023 14:57:47
// Duration: 0:54:41
// End: 2023-01-05 15:52:28
// Rating: 1400
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	int nums[n];
	for (int i = 0; i < n; i++) cin >> nums[i];
	int imax = 0;
	if (n < k * 2) imax = nums[n - 1];
	for (int i = 0; i < n - (k * 2 - n); i++)
		imax = max(nums[i] + nums[n - (k * 2 - n) - i - 1], imax);
	cout << imax;
	return 0;
}

// This works when you can put as many items in a box as you
// want as long as it doesn't exceed s
/*
int n, k;
cin >> n >> k;
int      imax = 0;
uint64_t sum  = 0;

for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    imax = max(j, imax);
    sum += j;
}
cout << max(imax,(int)ceil(sum / (double)k));
*/