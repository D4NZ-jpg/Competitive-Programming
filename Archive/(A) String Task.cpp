// Problem: A. String Task
// Contest: Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/contest/118/problem/A
// Rating: 1000

#include <bits/stdc++.h>
using namespace std;

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	string out = "";

	char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	for (int i = 0; i < s.size(); i++) {
		for (char vowel : vowels)
			if (s[i] == vowel || s[i] == vowel - 32) goto next;

		out += '.';
		if ('A' <= s[i] && s[i] <= 'Z') {
			out += (char)(s[i] + ('a' - 'A'));
			continue;
		}

		out += s[i];
	next:
		continue;
	}
	cout << out;
	return 0;
}
