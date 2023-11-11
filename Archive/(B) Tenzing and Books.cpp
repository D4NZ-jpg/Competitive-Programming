// Problem: B. Tenzing and Books
// Contest: Codeforces - CodeTON Round 5 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1842/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Duration: None
// End: 2023-07-21 20:53:15
// Rating: 1100
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
        int n, x; cin >> n >> x;

        uint a = 0,b = 0,c = 0;
        bool aV = true, bV = true, cV = true;
        for (int i = 0; i < n; i++) {
            uint tmp; cin >> tmp;
            if(aV && ((tmp|x) == x ))
                a |= tmp;
            
            else
                aV = false;
        }

        for (int i = 0; i < n; i++) {
            uint tmp; cin >> tmp;
            if(bV && ((tmp|x) == x ))
                b |= tmp;
            else
                bV = false;
        }

        for (int i = 0; i < n; i++) {
            uint tmp; cin >> tmp;
            if(cV && ((tmp|x) == x))
                c |= tmp;
            else
                cV = false;
        }

        uint curr = a|b|c;
        
        //cout << a << ' ' << b << ' ' << c << ' ' << curr << ' ' << x << ' ';
        if(curr != x) cout << "No" << endl;
        else cout << "Yes" << endl;


    }

	return 0;
}
