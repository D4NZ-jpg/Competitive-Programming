ll                 lvls = log2(n) + 5;
vector<vector<ll>> up(n + 1, vector<ll>(lvls, -1));

// Preprocess (up[x][0] must already be set)
for (ll l = 1; l < lvls; l++)
	for (ll m = 1; m <= n; m++)
		if (up[m][l - 1] != -1) up[m][l] = up[up[m][l - 1]][l - 1];

// Queries (node x, k-th ancestor)
ll x, k;
cin >> x >> k;
ll mask = 1;

for (ll l = 0; l < lvls; l++)
	if (x != -1 && k & (1 << l)) x = up[x][l];

cout << x << endl;
