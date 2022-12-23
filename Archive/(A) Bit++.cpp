// Problem: A. Bit++
// Contest: Codeforces - Codeforces Round #173 (Div. 2)
// URL: https://codeforces.com/problemset/problem/282/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, x = 0;
  string op;
  cin >> n;
  while (cin >> op)
    if (op.find("++") != string::npos)
      x++;
    else
      x--;
  cout << x << '\n';
  return 0;
}