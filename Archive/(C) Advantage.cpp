// Duration: None
// End: 2022-11-21 08:55:21
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1760/C
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

        if(n < 2)
        {
            cout << 0 << '\n';
            continue;
        }

        vector<int> nums(n);
        vector<int> Unsortednums(n);

        for(int i = 0; i < n; i++)
        {
            cin >> nums[i];
            Unsortednums[i] = nums[i];
        }

        sort(nums.begin(), nums.end());

        for(int i : Unsortednums)
            if(i != nums[n-1])
                cout << i - nums[n-1] << ' ';
            else
                cout << i - nums[n-2] << ' ';

        cout << '\n';
    }
    return 0;
}
