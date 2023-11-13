// Problem: D. In Love
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Start: 12-11-2023 17:31:10
// Duration: 0:31:44
// End: 2023-11-12 18:02:54
// Rating: 1500
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

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

	int q;
	cin >> q;
	multiset<ll>              r;
	multiset<ll, greater<ll>> l;
	while (q--) {
		char op;
		ll   a, b;
		cin >> op >> a >> b;
		if (op == '+') l.insert(a), r.insert(b);
		else
			l.erase(l.find(a)), r.erase(r.find(b));

		if (*l.begin() > *r.begin()) cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
