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

int n, x;
V<V<int>> a;
int c = 0;
void dfs(int m, int prev) {
	c++;
	for (int i : a[m]) {
		if (i != prev) {
			dfs(i, m);
		}
	}
}
 
void solve() { // number of nodes connecting to x - edge case - there can be one connection between a and b and you can still choose a
	c = 0;
	cin >> n >> x;
	a = V<V<int>>(n, V<int>());
	for (int i = 0; i < n-1; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		a[u].PS(v);
		a[v].PS(u);
	}
	if (a[x-1].size() <= 1) {
		cout << "Ayush" << endl;
		return;
	}
	int s = 0;
	for (int i : a[x-1]) {
		dfs(i, x - 1);
		s+=c;
		c = 0;
	}
	cout << ((s-1) & 1 ? "Ashish" : "Ayush") << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/
