// Duration: None
// End: 2022-12-11 10:43:06
// Rating: 900
// URL: https://codeforces.com/problemset/problem/1771/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    uint64_t t;
    cin >> t;

    while(t--)
    {
        uint64_t n;
        cin >> n;
        vector<uint64_t> nums(n);
        map<uint64_t, uint64_t> ht;

        for(uint64_t i = 0; i < n; i++)
        {
            uint64_t k;
            cin >> k;
            nums[i] = k;

            if(ht.count(k))
                ht[k]++;
            else
                ht[k] = 1;
        }

        sort(nums.begin(), nums.end());
        uint64_t maxDiff = nums[n-1] - nums[0];

        if(ht[nums[0]] == n)
            cout << (n-1)*n << '\n';
        else
            cout << (ht[nums[n-1]]*ht[nums[0]])*2 << '\n';
    }
}

