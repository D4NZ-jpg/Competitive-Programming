// Problem: A. A+B?
// Contest: Codeforces Round #839 (Div. 3)
// URL: https://codeforces.com/contest/1772/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    char x;
    cin >> a >> x >> b;
    cout << a + b << '\n';
  }
  return 0;
}
