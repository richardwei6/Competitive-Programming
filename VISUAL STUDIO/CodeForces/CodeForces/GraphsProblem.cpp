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
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

V<V<int>> g;
V<int> c;
void dfs(int x) {
	c[x] = 1;
	for (int i : g[x]) {
		if (c[i] == 0) {
			dfs(i);
		}
	}
}

void solve() {
	int n, m;
	cin >> n >> m;
	g = V<V<int>>(n, V<int>());
	c = V<int>(n, 0);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		g[u].PS(v);
		g[v].PS(u);
	}
	if (n == 2) {
		cout << -1 << endl;
		return;
	}
	dfs(0);
	for (int i : c) {
		if (i == 0) {
			cout << 0 << endl;
			return;
		}
	}
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		mn = min(mn, (int)g[i].size());
	}
	cout << mn << endl;
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
