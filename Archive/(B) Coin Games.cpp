// Problem: B. Coin Games
// Contest: Codeforces - Codeforces Round 942 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1972/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 30-04-2024 08:47:35
// Duration: 0:44:45
// End: 2024-04-30 09:32:20
// Rating: 900
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



bool solve(){
    ll n;
    string s;

    cin >> n >> s;

    ll cnt = 0;
    for(char& c: s) if(c!='D') cnt++;
    return cnt%2;

}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif

	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int tc; cin >> tc;
    while(tc--) cout << (solve() ? "YES":"NO") << endl;

	return 0;
}
