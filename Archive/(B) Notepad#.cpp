// Problem: B. Notepad#
// Contest: Educational Codeforces Round 139 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1766/problem/B
// Rating: 1000

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

    set<string> subs;
    int q;
    for (int i = 0; i < n - 1; i++) {
      string k = "", l = "";
      k += s[i];
      k += s[i + 1];
      if (i) {
        l += s[i - 1];
        l += s[i];
      }

      if (k == l && q == i)
        continue;
      if (subs.count(k))
        goto ye;

      subs.insert(k);
      q = i + 1;
    }

    cout << "NO\n";
    continue;
  ye:
    cout << "YES\n";
  }
}
