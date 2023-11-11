// Duration: None
// End: 2022-11-21 09:36:39
// Rating: 1000
// URL: https://codeforces.com/problemset/problem/1760/D
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
        int n;
        vector<int> valley(1);

        cin >> n >> valley[0];
        while(--n)
        {
            int i;
            cin >> i;

            if(i != valley[valley.size()-1])
                valley.push_back(i);
        }

        bool isValley = false;
        for(int i = 0; i < valley.size(); i++)
        {
            if(i && !(valley[i-1]>valley[i]))
                continue;
            if(i!=valley.size()-1 && !(valley[i] < valley[i+1]))
                continue;
            if(isValley)
            {
                isValley = false;
                break;
            }
            isValley = true;
        }
        if(isValley)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
