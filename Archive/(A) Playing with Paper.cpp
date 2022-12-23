// Problem: A. Playing with Paper
// Contest: Codeforces - Codeforces Round #296 (Div. 2)
// URL: https://codeforces.com/problemset/problem/527/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Rating: 1100

#include <bits/stdc++.h>
using namespace std;

int main() {
  // cin.tie(nullptr);
  // ios_base::sync_with_stdio(false);

  int64_t a, b, counter = 0;

  cin >> a >> b;

  while (a > 0 && b > 0)
    if (a > b) {
      counter += a / b;
      a %= b;
    } else {
      counter += b / a;
      b %= a;
    }

  cout << counter;
  return 0;
}