// Problem: A. Memory and Crow
// Contest: Codeforces - Codeforces Round #370 (Div. 2)
// URL: https://codeforces.com/problemset/problem/712/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  int64_t a = 0, b = 0;
  cin >> n;

  int64_t nums[n];
  for (int i = 0; i < n; i++)
    cin >> nums[i];
  a += nums[n - 1];
  bool l = true;

  for (int i = n - 2; i >= 0; i--) {
    nums[i] -= l ? -a + b : a - b;
    !l ? a += nums[i] : b += nums[i];
    l = !l;
  };

  for (auto &i : nums)
    cout << i << ' ';
  return 0;
}