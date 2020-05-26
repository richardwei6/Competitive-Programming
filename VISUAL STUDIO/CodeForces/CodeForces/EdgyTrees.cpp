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
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;

int n, k;
V<V<int>> g;

int dfs(int c, int x) { // exculsion
	int nodes = 1;
	for (int i = 0; i < n; i++) {
		if (i != x && g[c][i] != -1) { // not exculsion
			nodes += dfs(i, c);
		}
	}
	return nodes;
}

ll fact(ll n) {
	ll r = 1;
	for (ll i = 2; i <= n; i++) {
		r *= i;
	}
	return r;
}

ll nPr(ll n, ll r) { 
	if (r > n) {
		return 0;
	}
	return fact(n)/fact(n-r);
} 


void solve() {
	cin >> n >> k;
	g = V<V<int>>(n, V<int>(n, -1));
	V<pair<int, int>> bl; // black pairs
	for (int i = 1; i < n; i++) {
		int u, v, x;
		cin >> u >> v >> x;
		g[u-1][v-1] = x;
		g[v-1][u-1] = x;
		if (x == 1) {
			bl.PS({ u - 1,v - 1 });
		}
	}
	for (auto i : g) {
		for (int j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	cout << "black pairs - " << endl;
	for (auto i : bl) {
		cout << i.first << " " << i.second << endl;
	}
	V<pair<int, int>> d; // number of nodes for each black lines segments
	for (pair<int, int> i : bl) { // for each black lines
		d.PS({ dfs(i.first, i.second), dfs(i.second, i.first) });
	}
	cout << "nodes - " << endl;
	for (auto i : d) {
		cout << i.first << " " << i.second << endl;
	}
	// calculate combinations
	ll ans = 0;
	for (pair<int, int> p : d) {
		cout << p.first << " - " << p.second << endl;
		for (int i = 1; i < k; i++) { // each combination
			cout << i << " " << k - i << endl; // - nCr's r
			ans += nPr(p.first, i) * nPr(p.second, k - i);
			cout <<" += " <<nPr(p.first, i) * nPr(p.second, k - i) << " = " << nPr(p.first, i) << " * " << nPr(p.second, k-i) << endl;

		}
	}
	cout << "ans - "<< ans << endl;
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
