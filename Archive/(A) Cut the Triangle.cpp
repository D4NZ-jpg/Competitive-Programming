// Duration: None
// End: 2022-12-16 09:56:05
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1767/A
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
        cin.ignore();
        pair<int, int> points[3];
        for(int i = 0; i < 3; i++)
        {
            int x, y;
            cin >> x >> y;
            points[i] = {x,y};
        }

        if(points[0].first != points[1].first && points[0].first != points[2].first && points[1].first != points[2].first)
            cout << "YES\n";
        else if(points[0].second != points[1].second && points[0].second != points[2].second && points[1].second != points[2].second)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
