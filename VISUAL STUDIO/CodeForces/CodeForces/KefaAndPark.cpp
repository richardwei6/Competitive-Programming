
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

int n, m;
V<int> cat;
V<V<int>> g;

int dfs(int prev, int node, int c) { // previous, current nodes, and consective cats
	if (cat[node] == 1) {
		c++;
	}
	else {
		c = 0;
	}
	if (c > m) {
		return 0;
	}
	int s = 0;
	for (int i = 0; i < g[node].size(); i++) {
		if (g[node][i] != prev)  {
			s += dfs(node, g[node][i], c);
		}
	}
	return g[node].size() == 1 ? 1 : s;
}

void solve() {
	cin >> n >> m;
	cat = V<int>(n, 0);
	g = V<V<int>>(n, V<int>());
	for (int& i : cat) {
		cin >> i;
	}
	for (int i = 1; i < n; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		g[x].PS(y);
		g[y].PS(x);
	}
	int s = 0;
	for (int i = 0; i < g[0].size(); i++) {
		if (cat[0] == 1) {
			s += dfs(0, g[0][i], 1);
		}
		else{
			s += dfs(0, g[0][i], 0);
		}
	}
	cout << s << endl;
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
