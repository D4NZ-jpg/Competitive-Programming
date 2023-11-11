// Duration: None
// End: 2022-11-25 10:57:26
// Rating: 900
// URL: https://codeforces.com/problemset/problem/1758/B
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
        cin >> n;
        if(n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        if(n%2)
        {
            for(int i = 0; i < n; i++)
                cout << 1 << ' ';
            cout << '\n';
            continue;
        }

		for(int i = 0; i < n - 2; i++ )
			cout << 2 << ' ';
		cout << 3 << ' ' << 1 << '\n';
    }
}
