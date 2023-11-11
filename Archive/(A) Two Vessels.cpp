// Problem: A. Two Vessels
// Contest: Codeforces - Codeforces Round 895 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1872/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 10-09-2023 07:24:36
// Duration: 0:06:51
// End: 2023-09-10 07:31:27
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;

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

    int t; cin >> t;
    while(t--)
    {
        float a, b, c; cin >> a >> b >> c;
        float mid = (a+b)/2;

        cout << ceil((max(a,b) - mid)/c) << endl;
    }

	return 0;
}
