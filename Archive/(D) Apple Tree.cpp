// Problem: D. Apple Tree
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/contest/1843/problem/D
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// Start: 06-07-2023 23:07:30
// End: 07-07-2023 00:32:48
// Duration: 1:25:18
// Rating: 1200

#include <queue>

using namespace std;

using uint = unsigned int;

#define gcd(x, y) __gcd(x, y)
#define mcm(x, y) abs((x) * (y)) / gcd(x, y)
#define sz(x)     (int)(x).size()
#define all(x)    begin(x), end(x)
#define pb(x)     push_back(x)
#define v(x)      vector<x>
#define endl      '\n'

map<int, v(int)> tree;
map<int, int>    mem;

uint64_t getChildren(int x) {
	if (mem.count(x)) return mem[x];
	if (!tree.count(x)) return 1;

	uint64_t sum = 0;
	for (auto& child : tree[x]) sum += getChildren(child);

	mem[x] = sum;
	return sum;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;

		map<int, v(int)> tmp;
		tree.clear();

		for (int i = 0; i < n - 1; i++) {
			int u, v;
			cin >> u >> v;
			tmp[u].pb(v);
			tmp[v].pb(u);
		}

		// Prep tree
		queue<int> bfs;
		set<int>   visited;
		bfs.push(1);
		while (sz(bfs)) {
			int curr = bfs.front();
			bfs.pop();

			if (visited.count(curr)) continue;
			visited.insert(curr);

			for (int& child : tmp[curr]) {
				if (!visited.count(child)) tree[curr].pb(child);
				bfs.push(child);
			}
		}

		mem.clear();
		int q;
		cin >> q;
		while (q--) {
			uint64_t x, y;
			cin >> x >> y;
			cout << getChildren(x) * getChildren(y) << endl;
		}
	}

	return 0;
}
