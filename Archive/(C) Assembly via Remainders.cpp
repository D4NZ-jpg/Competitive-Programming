// Problem: C. Assembly via Remainders
// Contest: Codeforces - Codeforces Round 943 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1968/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 02-05-2024 09:05:47
// Duration: 1:04:39
// End: 2024-05-02 10:10:26
// Rating: 1000
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

void solve() {
	ll n;
	cin >> n;
	vector<ull> x(n - 1), a(n);
	for (auto& i : x) cin >> i;

	a[0] = 1254634;

	for (int i = 1; i < n; i++) a[i] = a[i - 1] + x[i - 1];

	for (ull& i : a) cout << i << ' ';
	cout << endl;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int tc;
	cin >> tc;
	while (tc--) { solve(); }

	return 0;
}
