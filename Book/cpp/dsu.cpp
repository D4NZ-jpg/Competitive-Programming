class DSU {
  private:
	vector<ll> g;

  public:
	DSU(ll n) : g(n + 1, -1), components(n) {}
	ll components;

	ll get(ll x) {
		if (g[x] < 0) return x;
		return g[x] = get(g[x]);  // Path compression
	}

	bool merge(ll x, ll y) {
		ll a = get(x), b = get(y);
		if (a == b) return false;

		if (g[a] > g[b]) swap(a, b);  // Small to Large
		g[a] += g[b], g[b] = a, components--;
		return true;
	}
};
