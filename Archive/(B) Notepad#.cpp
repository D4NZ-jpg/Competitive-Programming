// Duration: None
// End: 2022-12-12 09:04:17
// Rating: 1000
// URL: https://codeforces.com/problemset/problem/1766/B
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

        set<string> subs;
        int q;
        for(int i = 0; i < n-1; i++)
        {
            string k = "", l = "";
            k += s[i];
            k += s[i+1];
            if(i)
            {
                l += s[i-1];
                l += s[i];
            }

            if(k == l && q == i)
                continue;
            if(subs.count(k))
                goto ye;

            subs.insert(k);
            q = i+1 ;
        }

        cout << "NO\n";
        continue;
    ye:
        cout << "YES\n";
    }
}
