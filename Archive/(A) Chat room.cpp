// Duration: None
// End: 2022-05-04 22:18:18
// Rating: 1000
// URL: https://codeforces.com/problemset/problem/58/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    string hello = "hello";
    int ptr = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == hello[ptr])
            if(++ptr >= hello.size())
            {
                cout << "YES";
                return 0;
            }

    }
    cout << "NO";
    return 0;
}

