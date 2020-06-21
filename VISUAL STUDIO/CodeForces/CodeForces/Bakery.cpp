
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


void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	V<int> f(n);
	V<V< pair<int,int> >> g(n, V<pair<int,int>>());
	for (int i = 0; i < m; i++) {
		int u, v, l;
		cin >> u >> v >> l;
		u--, v--;
		g[u].PS({ v, l });
		g[v].PS({ u, l });
	}
	if (k == 0) {
		cout << -1 << endl;
		return;
	}
	for (int i = 0; i < k; i++) {
		int j;
		cin >> j;
		f[j - 1] = 1;
	}
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) 
		if (f[i] == 1) 
			for (int j = 0; j < g[i].size(); j++) 
				if (f[g[i][j].first] == 0) 
					mn = min(mn, g[i][j].second);
	cout << (mn == INT_MAX ? -1 : mn) << endl;
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
