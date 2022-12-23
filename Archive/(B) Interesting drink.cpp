// Problem: B. Interesting drink
// Contest: Codeforces Round #367 (Div. 2)
// URL: https://codeforces.com/contest/706/problem/B
// Rating: 1100

#include <bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n, q;
  cin >> n;
  int shops[n];
  for (int i = 0; i < n; i++)
    cin >> shops[i];
  sort(shops, shops + n);

  cin >> q;
  for (int i = 0; i < q; i++) {
    int coins;
    cin >> coins;
    cout << upper_bound(shops, shops + n, coins) - shops << '\n';
  }

  return 0;
}
