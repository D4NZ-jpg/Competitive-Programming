// Problem: C. Ranom Numbers
// Contest: Codeforces - Educational Codeforces Round 150 (Rated for
// Div. 2) URL: https://codeforces.com/contest/1841/problem/C Memory
// Limit: 256 MB Time Limit: 2000 ms Start: 17-06-2023 14:40:17
// Duration: None
// End: 2023-06-17 18:30:52
// Rating: 1800
// URL: https://codeforces.com/problemset/problem/1841/C
#include <bits/stdc++.h>
using namespace std;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs(x* y) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)

const map<char, int> vals = {{'A', 1},
                             {'B', 10},
                             {'C', 100},
                             {'D', 1000},
                             {'E', 10000}};

int getNum(string s) {
	int imax = 0, sum = 0;
	for (auto it = s.rbegin(); it != s.rend(); it++) {
		int curr = vals.at(*it);
		if (imax > curr) sum -= curr;
		else
			sum += curr;
		imax = max(curr, imax);
	}
	return sum;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n--) {
		string s, cp;
		cin >> s;
		int imax = INT_MIN;

		map<char, pair<int, int>> pos;
		for (int i = 0; i < s.size(); i++) {
			if (!pos.count(s[i])) pos[s[i]] = {s.size() + 5, -1};
			pos[s[i]] = {min(pos[s[i]].first, i),
			             max(pos[s[i]].second, i)};
		}

		for (auto& i : pos) {
			for (int j = 0; j < 5; j++) {
				cp                 = s;
				cp[i.second.first] = 'A' + j;
				imax               = max(imax, getNum(cp));
			}
			if (i.second.first != i.second.second)
				for (int j = 0; j < 5; j++) {
					cp                  = s;
					cp[i.second.second] = 'A' + j;
					imax                = max(imax, getNum(cp));
				}
		}
		cout << imax << '\n';
	}

	return 0;
}

/*
DDDDE
1000 1000 1000
*/