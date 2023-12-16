// Problem: A. How Much Does Daytona Cost?
// Contest: Codeforces - Codeforces Round 900 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1878/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 11-12-2023 10:38:38
// Duration: 0:01:43
// End: 2023-12-11 10:40:21
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll = long long;

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


    ll tc; cin >> tc;
    while(tc--)
    {
        ll n, k; cin >> n >> k;
        bool present = false;
        for(int i =0; i < n; i++)
        {
            ll j; cin >> j;
            present = present || j == k;
        }

        cout << (present ? "YES": "NO") << endl;
    }
	return 0;
}
