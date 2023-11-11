// Duration: None
// End: 2022-05-03 18:26:46
// Rating: 1000
// URL: https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    double m, n, a;
    cin >> n >> m >> a;
    int64_t x = ceil(n/a);
    int64_t y = ceil(m/a);
    cout << x*y;
    return 0;
}

