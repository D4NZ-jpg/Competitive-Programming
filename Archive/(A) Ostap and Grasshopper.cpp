// Problem: A. Ostap and Grasshopper
// Contest: Codeforces - Codeforces Round #382 (Div. 2)
// URL: https://codeforces.com/problemset/problem/735/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, k, s, e;
  cin >> n >> k;
  bool line[n];
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    line[i] = c == '#';
    if (c == 'G')
      s = i;
    else if (c == 'T')
      e = i;
  }

  if (abs(s - e) % k)
    cout << "NO";
  else {
    for (int i = s; i != e; i += (e < s ? -k : k))
      if (line[i]) {
        cout << "NO";
        return 0;
      }
    cout << "YES";
  }
  return 0;
}