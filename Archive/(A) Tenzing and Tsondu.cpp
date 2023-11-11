// Problem: A. Tenzing and Tsondu
// Contest: Codeforces - CodeTON Round 5 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1842/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 21-07-2023 19:45:47
// Duration: 0:16:13
// End: 2023-07-21 20:02:00
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
        int n, m;
        uint64_t sumA = 0, sumB = 0;
        cin >> n >> m;

        while(n--) {
            int tmp; cin >> tmp;
            sumA += tmp;
        }

        while(m--)
        {
            int tmp; cin >> tmp;
            sumB += tmp;
        }

        if(sumA == sumB) cout << "Draw" << endl;
        else if(sumA > sumB) cout << "Tsondu" << endl;
        else cout << "Tenzing" << endl;
    }

	return 0;
}
