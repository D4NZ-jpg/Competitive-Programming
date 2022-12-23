// Problem: C. Ice and Fire
// Contest: Polynomial Round 2022 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/contest/1774/problem/C
// Rating: 1300

#include <bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    int players[n - 1];
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == s[i - 1])
        players[i] = players[i - 1];
      else
        players[i] = i + 1;
      cout << players[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
