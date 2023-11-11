// Duration: None
// End: 2022-11-04 08:45:58
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1747/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);


    int t;
    cin >> t;
    while(t--)
    {
     int64_t n, total = 0;
     cin >> n;

     while(n--)
     {
         int64_t i;
         cin >> i;
         total += i;
     }
     cout << abs(total) << '\n';
    }
    return 0;
}
