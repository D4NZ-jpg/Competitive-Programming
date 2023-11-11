// Duration: None
// End: 2022-11-21 08:43:00
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1760/B
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
        string s;

        cin >> n >> s;

        int maxChar = 0;
        for(char c : s)
            if(c > maxChar)
                maxChar = c;

        cout << maxChar - 'a' + 1 << '\n';
    }
    return 0;
}
