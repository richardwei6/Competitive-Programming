
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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) push_back(x)

int n, m;
V<V<int>> g;
set<int> p; // passed cities - cities we already assigned a group

set<int> o;
void thisC(int c) { // checks all connections to this city and forms a group
	o.insert(c);
	p.insert(c);
	for (int i = 0; i < n; i++) {
		if (o.count(i) == 0 && g[c][i] == 1 && p.count(i) == 0) {
			thisC(i);
		}
	}
}


void solve() {
	cin >> n >> m;
	g = vector<vector<int>>(n, vector<int>(n, 1));
	while (m--) {
		int a, b;
		cin >> a >> b;
		g[a-1][b-1] = 0;
		g[b-1][a-1] = 0;
	}
	set<set<int>> c; //city groups
	for (int i = 0; i < n; i++) { // for each city
		if (p.count(i) == 0) {
			thisC(i);
			c.insert(o);
			o = {};
		}
	}
	cout << c.size() << endl;
	for (auto i : c) {
		cout << i.size() << " ";
		for (int j : i) {
			cout << j+1 << " ";
		}
		cout << endl;
	}

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
