// Duration: None
// End: 2022-12-17 08:48:40
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1774/A
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

        string s, out = "";
        cin >> s;

        int sum = 0;
        sum += s[0] - '0';
        for(int i = 1; i < n; i++)
        {
            if(sum <= 0)
            {
                sum += s[i] - '0';
                out += '+';
            }
            else
            {
                sum -= s[i] - '0';
                out += '-';
            }
        }
        cout << out << '\n';
    }
    return 0;
}
