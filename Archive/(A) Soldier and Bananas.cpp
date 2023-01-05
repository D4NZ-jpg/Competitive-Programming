// Problem: A. Soldier and Bananas
// Contest: Codeforces - Codeforces Round #304 (Div. 2)
// URL: https://codeforces.com/problemset/problem/546/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 29-12-2022 20:08:04
// End: 29-12-2022 20:09:31
// Duration: 0:01:27
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int k, n, w;
  cin >> k >> n >> w;
  int res = w * (w + 1) / 2 * k;
  cout << (res > n ? res - n : 0);

  return 0;
}