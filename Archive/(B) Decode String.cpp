// Duration: None
// End: 2022-09-18 13:56:47
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1729/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int q;
    cin >> q;

    while(q--)
    {
        int n;
        string s, out = "";
        cin >> n >> s;

        for(auto i = s.rbegin(); i < s.rend(); i++)
            out += *i != '0' ? 'a' + (*i - '0') - 1 : 'a' + (*++i - '0' + 10* (*++i - '0')) -1;

        reverse(out.begin(),out.end());
        cout << out << '\n';
    }

    return 0;
}


/*
code:

1
6
315045
*/
