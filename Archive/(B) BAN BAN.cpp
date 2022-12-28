// Problem: B. BAN BAN
// Contest: Codeforces - Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/contest/1747/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 26-12-2022 23:15:53
// End: 26-12-2022 23:51:52
// Duration: 0:35:59
// Rating: 900

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << ceil(n / 2.0f) << '\n';

    int l = 1, r = 3 * n;
    while (l < r) {
      cout << l << ' ' << r << '\n';
      l += 3;
      r -= 3;
    }
  }
  return 0;
}
