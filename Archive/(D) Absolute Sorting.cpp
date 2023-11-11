// Duration: None
// End: 2022-12-18 10:51:44
// Rating: 1400
// URL: https://codeforces.com/problemset/problem/1772/D
#include <bits/stdc++.h>
using namespace std;

bool addX(int* nums, int n, int x)
{
    int out[n], tmp[n];
    for(int i = 0; i < n; i++)
    {
        out[i] = abs(nums[i]-x);
        tmp[n] = out[i];
    }

    sort(tmp, tmp+n);
    for(int i = 0; i < n; i++)
        if(out[i] != tmp[i])
            return false;
    return true;
}

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
        vector<int> nums(n);
        for(int i = 0; i < n; i++)
            cin >> nums[i];

        vector<int> asc = nums, desc = nums;
        sort(asc.begin(),asc.end());
        sort(desc.begin(),desc.end(),greater<int>());

        if(nums == asc)
            cout << "0\n";
        else if (nums == desc)
            cout << desc[0] << '\n';
        else
        {
            int out = 0;
            for(int i = 0; i < n-1; i++)
                if(nums[i+1] < nums[i])
                    out = max(out, nums[i]-abs(nums[i+1]-nums[i])/2);
            for(int i = 0; i < n; i++)
                nums[i] = abs(nums[i]-out);

            vector<int> x = nums;
            sort(x.begin(),x.end());
            if(x == nums)
                cout << out << '\n';
            else
                cout << "-1\n";
        }
    }
    return 0;
}
