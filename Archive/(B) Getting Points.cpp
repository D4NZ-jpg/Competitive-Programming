// Problem: B. Getting Points
// Contest: Codeforces - Educational Codeforces Round 159 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1902/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Start: 03-12-2023 08:45:03
// Duration: 0:32:43
// End: 2023-12-03 09:17:46
// Rating: 1100
#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define endl      '\n'

ll solve(ll n, ll x, ll lesson, ll task) {
	ll projects = (n + 6) / 7, score = 0;

	score += (2 * task + lesson) * min(x, projects / 2);
	x -= min(x, projects / 2);

	if (projects % 2 && x) {
		x--;
		score += task + lesson;
	}

	score += x * lesson;

	return score;
}

int main() {
#ifdef DEBUG
	std::cout << std::unitbuf;
#endif
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	ll tc;
	cin >> tc;
	while (tc--) {
		ll n, trgt, lesson, task;
		cin >> n >> trgt >> lesson >> task;

		ll l = 1, r = n;
		while (l < r) {
			ll mid   = (l + r) / 2;
			ll score = solve(n, mid, lesson, task);

			if (score >= trgt) r = mid;
			else
				l = mid + 1;
		}
		cout << n - l << endl;
	}

	return 0;
}
