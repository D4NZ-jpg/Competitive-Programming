// Problem: A. Contest Proposal
// Contest: Codeforces - Codeforces Round 942 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1972/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-04-2024 08:35:24
// Duration: 0:11:47
// End: 2024-04-30 08:47:11
// Rating: 800
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

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n),b(n);
        for (auto& i: a) cin >> i;
        for (auto& i: b) cin >> i;  
 
        ll l = 0, r = 0, cnt = 0;
        while(l < n && r < n)
        {
            if(a[l] <= b[r]) l++;
            else cnt++;
            r++;
        }

        cout << cnt << endl;
    }

	return 0;
}
