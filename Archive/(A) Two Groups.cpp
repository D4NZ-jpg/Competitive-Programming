// Problem: A. Two Groups
// Contest: Codeforces Round #832 (Div. 2)
// URL: https://codeforces.com/contest/1747/problem/A
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  while (t--) {
    int64_t n, total = 0;
    cin >> n;

    while (n--) {
      int64_t i;
      cin >> i;
      total += i;
    }
    cout << abs(total) << '\n';
  }
  return 0;
}
