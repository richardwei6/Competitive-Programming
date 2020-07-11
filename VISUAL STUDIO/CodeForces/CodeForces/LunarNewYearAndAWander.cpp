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
		cout << i+1 << " ";
	cout << endl;
}


void solve() {
	int n, m;
	cin >> n >> m;
	V<int> ans = {0}, p(n);
	V<set<int>> g(n, set<int>());
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		g[u].insert(v);
		g[v].insert(u);
	}
	set<int> d;
	p[0] = 1;
	for (int i : g[0]) 
		if (i) 
			d.insert(i);
	while (d.size()) {
		int t = *begin(d);
		d.erase(begin(d));
		p[t] = 1;
		ans.PS(t);
		for (int i : g[t]) 
			if (p[i] == 0) 
				d.insert(i);	
	}
	D(ans);
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
