// Duration: None
// End: 2022-11-21 08:39:47
// Rating: 800
// URL: https://codeforces.com/problemset/problem/1760/A
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
        vector<int16_t> nums(3);
        for(int i = 0; i < 3; i++)
            cin >> nums[i];

        sort(nums.begin(), nums.end());
        cout << nums[1] << '\n';
    }
    return 0;
}
