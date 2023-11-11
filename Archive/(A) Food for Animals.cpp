// Duration: None
// End: 2022-05-07 22:16:03
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1675/A
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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x -= a;
        y -= b;

        if(x < 0)
            x = 0;
        if(y < 0)
            y = 0;

        if(x+y-c > 0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}
