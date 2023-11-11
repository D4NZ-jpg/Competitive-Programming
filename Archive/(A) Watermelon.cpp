// Duration: None
// End: 2022-05-02 22:44:51
// Rating: 800
// URL: https://codeforces.com/problemset/problem/4/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int w;
    cin >> w;
    if(w <= 2)
    {
        cout << "NO";
        return 0;
    }
    if(w%2==0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}


