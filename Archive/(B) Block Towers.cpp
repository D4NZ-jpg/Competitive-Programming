// Duration: None
// End: 2022-12-16 10:12:16
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1767/B
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
        uint64_t mainT;

        cin >> mainT;
        vector<uint64_t> towers(n-1);
        for(int i = 0; i < n-1; i++)
            cin >> towers[i];

        sort(towers.begin(),towers.end());
        for(int i = 0; i < n-1; i++)
        {
            int x = (towers[i]-mainT)/2;
            if(mainT<towers[i])
                mainT+= (!((towers[i]-mainT)%2))?x:x+1;
        }
        cout << mainT << '\n';
    }
    return 0;
}