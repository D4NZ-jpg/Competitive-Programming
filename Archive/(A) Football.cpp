// Problem: A. Football
// Contest: Codeforces Beta Round #77 (Div. 2 Only)
// URL: https://codeforces.com/contest/96/problem/A
// Rating: 900

#include <bits/stdc++.h>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  string s;
  cin >> s;
  int current = s[0];
  int countm = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == current)
      countm++;
    else {
      countm = 1;
      current = s[i];
    }
    if (countm >= 7) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
