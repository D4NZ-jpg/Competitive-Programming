// Problem: D. Take a Guess
// Contest: Codeforces - Deltix Round, Summer 2021 (open for everyone,
// rated, Div. 1 + Div. 2) URL: https://codeforces.com/contest/1556/problem/D Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 24-09-2023 17:52:20
// Duration: 2:09:14
// End: 2023-09-24 20:01:34
// Rating: 1800
// URL: https://codeforces.com/problemset/problem/1556/D
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

void getNums(vector<int>& v, int a, int b, int c, int pos) {
	v[pos + 0] = (a + b - c) / 2;
	v[pos + 1] = (a - b + c) / 2;
	v[pos + 2] = (-a + b + c) / 2;
}

int getAND(int a, int b) {
	cout << "and " << ++a << ' ' << ++b << endl;
	int ans;
	cin >> ans;
	return ans;
}

int getOR(int a, int b) {
	cout << "or " << ++a << ' ' << ++b << endl;
	int ans;
	cin >> ans;
	return ans;
}

int getSum(int a, int b) {
	int AND = getAND(a, b);
	int OR  = getOR(a, b);
	return (AND << 1) + ((~AND) & OR);
}

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v;
	v.assign(n, -1);

	for (int i = 0; i + 2 < n; i += 3) {
		int a = getSum(i, i + 1), b = getSum(i, i + 2),
		    c = getSum(i + 1, i + 2);

		getNums(v, a, b, c, i);
	}

	if (n % 3 == 2) {
		int sum  = getSum(n - 3, n - 2);
		v[n - 2] = sum - v[n - 3];
	}
	if (n % 3) {
		int sum  = getSum(n - 2, n - 1);
		v[n - 1] = sum - v[n - 2];
	}

	sort(all(v));
	cout << "finish " << v[k - 1] << endl;

	return 0;
}
