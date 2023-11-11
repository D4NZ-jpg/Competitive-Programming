// Duration: None
// End: 2022-11-25 09:39:59
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1758/A
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
        string s;
        cin >> s;

        for(int i = s.size()-1; i >=0; i--)
            s += s[i];

        cout << s << '\n';
    }
    return 0;
}
