// Duration: None
// End: 2022-12-12 08:43:30
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1766/A
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
        string n;
        cin >> n;

        int counter = 0;
        bool started = false;
        for(int i = 0; i < n.size(); i++)
        {
            if(!started && n[i] != '0')
            {
                counter += (int)(n[i] - '0');
                started = true;
                continue;
            }
            else if(started)
                counter += 9;
        }

        cout << counter << '\n';

    }
}
