// Duration: None
// End: 2022-05-02 21:36:57
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1669/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if(1900<=t)
            cout << "Division 1\n";
        else if(1600 <= t)
            cout << "Division 2\n";
        else if(1400 <= t)
            cout << "Division 3\n";
        else
            cout << "Division 4\n";
    }

    return 0;
}


