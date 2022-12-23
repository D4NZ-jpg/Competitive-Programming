// Problem: A. Chips
// Contest: Codeforces - Codeforces Beta Round #75 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/92/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int r = n * (n + 1) / 2;
  m %= r;

  for (int i = 0; i < n; i++)
    if (m >= i)
      m -= i;
    else
      break;
  cout << m;

  return 0;
}