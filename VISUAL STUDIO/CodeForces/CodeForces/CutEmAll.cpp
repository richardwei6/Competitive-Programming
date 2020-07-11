/*

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <cmath>
#include <limits>
#include <list>
#include <memory>
#include <stack>
#include <iterator>
#include <queue>
#include <numeric>
#include <bitset>
#include <iomanip>
#include <cstring>
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define ld long double
#define ull unsigned long long
#define V vector
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

V<ll> p;
V<V<ll>> g;

ll t = 0;

ll dfs(ll x) {
	p[x] = 1;
	ll c = 1;
	for (auto i : g[x]) 
		if (!p[i]) 
			c += dfs(i);
	t += !(c % 2);
	return c;
}

void solve() { // if a node has an odd num of connections, make sure one of the branches can be separated
	ll n;
	cin >> n;
	if (n % 2) {
		cout << -1 << endl;
		return;
	}
	p = V<ll>(n);
	g = V<V<ll>>(n, V<ll>());
	for (ll i = 1; i < n; i++) {
		ll u, v;
		cin >> u >> v;
		u--, v--;
		g[u].PS(v);
		g[v].PS(u);
	}
	dfs(0);
	cout << t-1 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t;
//	while (t--)
		solve();
	return 0;
}


/**/
