// Problem: C. Registration system
// Contest: Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/4/C
// Memory Limit: 64 MB
// Time Limit: 5000 ms
// Start: 27-01-2024 21:12:19
// Duration: 0:03:57
// End: 2024-01-27 21:16:16
// Rating: 1300
#include <bits/stdc++.h>

#include <string>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using pll = pair<ll, ll>;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll n;
	cin >> n;

	map<string, ll> db;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (!db[s]++) {
			cout << "OK" << endl;
			continue;
		}

		cout << s + to_string(db[s] - 1) << endl;
	}

	return 0;
}
