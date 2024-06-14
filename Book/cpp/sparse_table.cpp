class SparseTable {
  private:
	const ll             lvls = 20;
	vector<vector<ll>>   t;
	function<ll(ll, ll)> f;

  public:
	SparseTable(vector<ll>& v, function<ll(ll, ll)> g) :
	    f(g),
	    t(lvls, vector<ll>(v.size(), -1)) {
		const ll n = v.size();

		for (int i = 0; i < n; i++) t[0][i] = v[i];

		for (ll l = 1; l < lvls; l++)
			for (int i = 0; i + (1 << l) <= n; i++)
				t[l][i] =
				  f(t[l - 1][i], t[l - 1][i + (1 << (l - 1))]);
	}

	ll query(ll l, ll r) {
		ll tmp = r - l + 1, k = 0;
		while (tmp > 1) k++, tmp >>= 1;

		return f(t[k][l], t[k][r - (1 << k) + 1]);
	}
};
