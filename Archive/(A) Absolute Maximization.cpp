// Duration: None
// End: 2022-12-19 09:14:33
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1763/A
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
        int n;
        cin >> n;
        int nums[n];
        for(int i = 0; i < n; i++)
            cin >> nums[i];

        int Imax = nums[0], Imin = nums[0];

        for(int i = 0; i < n; i++)
        {
            Imax |= nums[i];
            Imin &= nums[i];
        }
        cout << Imax-Imin << '\n';
    }
    return 0;
}


/*
001
010
011
100
101
---
001
101

100
*/
