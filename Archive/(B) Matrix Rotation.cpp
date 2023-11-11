// Duration: None
// End: 2022-12-18 09:11:12
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1772/B
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
        int m[4];
        for(int i = 0; i < 4; i++)
            cin >> m[i];

        bool beautiful = false;

        for(int i = 0; i < 4; i++)
        {
            if(!(i%2) && m[i]< m[(i+1)%4] && m[(i+2)%4] < m[(i+3)%4] && m[i] < m[(i+2)%4] && m[(i+1)%4] < m[(i+3)%4])
            {
                beautiful = true;
                break;
            }
            if((i%2) && m[i] < m[(i+2)%4] && m[(i+3)%4] < m[(i+1)%4] && m[i] < m[(i+3)%4] && m[(i+2)%4] < m[(i+1)%4])
            {
                beautiful = true;
                break;
            }

        }

        if(beautiful)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}


