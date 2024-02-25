// Problem: A. Hulk
// Contest: Codeforces - Codeforces Round 366 (Div. 2)
// URL: https://codeforces.com/problemset/problem/705/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 04-02-2024 22:44:21
// Duration: 0:04:32
// End: 2024-02-04 22:48:53
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

    ll n;
    cin >> n;
    
    for (int i = 1; i <= n-1; i++) cout << "I " << (i%2 ? "hate" : "love") << " that ";
    cout << "I " << (n%2 ? "hate" : "love") << " it";
        
    
    

	return 0;
}
