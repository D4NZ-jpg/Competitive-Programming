// Problem: A. Bear and Five Cards
// Contest: Codeforces - Codeforces Round #356 (Div. 2)
// URL: https://codeforces.com/problemset/problem/680/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  map<int, int> cards;
  for (int i = 0; i < 5; i++) {
    int k;
    cin >> k;
    cards[k]++;
  }
  int Imax = 0, sum = 0;
  for (auto &i : cards) {
    sum += i.second * i.first;
    if (i.second > 1)
      if (i.second >= 3)
        Imax = max(3 * i.first, Imax);
      else if (i.second == 2)
        Imax = max(2 * i.first, Imax);
  }

  cout << sum - Imax;

  return 0;
}