// Duration: None
// End: 2022-05-05 19:26:21
// Rating: 1100
// URL: https://codeforces.com/problemset/problem/158/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int groups[4] = {0}, taxis = 0, n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        groups[x-1]++;
    }

    taxis += groups[3];
    groups[3] = 0;
    taxis += groups[1]/2;
    groups[1] %= 2;

    while(groups[0] && groups[2])
    {
        taxis++;
        groups[0]--;
        groups[2]--;
    }
    taxis+= groups[2];
    groups[2] = 0;

    if(groups[1])
    {
        groups[0] -= 2;
        taxis++;
    }
    if(groups[0] > 0)
        taxis += ceil(groups[0]/4.0f);

    cout << taxis;

    return 0;
}
