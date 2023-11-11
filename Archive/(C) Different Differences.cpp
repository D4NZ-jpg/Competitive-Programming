// Duration: None
// End: 2022-12-18 09:43:12
// Rating: 1000
// URL: https://codeforces.com/problemset/problem/1772/C
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
        int n, k;
        cin >> k >> n;

        int nums[k];
        nums[k-1] = n;
        bool a;

        for(int i=k-2; i >= 0; i--)
        {

            if(nums[i+1]-(k-i-1) < (i+1))
                nums[i] = nums[i+1]-1;
            else
                nums[i] = nums[i+1]-(k-i-1);
        }

        for(auto& i: nums)
            cout << i << ' ';
        cout << '\n';

    }
    return 0;
}
