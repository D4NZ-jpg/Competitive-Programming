// Problem: A. SSeeeeiinngg DDoouubbllee
// Contest: Codeforces Round #836 (Div. 2)
// URL: https://codeforces.com/contest/1758/problem/A
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--)
      s += s[i];

    cout << s << '\n';
  }
  return 0;
}
