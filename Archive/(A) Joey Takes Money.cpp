// Problem: A. Joey Takes Money
// Contest: Codeforces - Codeforces Round #841 (Div. 2) and Divide by
// URL: https://codeforces.com/contest/1731/problem/A

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
    uint64_t result = 0;
    cin >> result;
    for (int i = 1; i < n; i++) {
      uint64_t k;
      cin >> k;
      result *= k;
    }

    cout << 2022 * (result + n - 1) << '\n';
  }

  return 0;
}