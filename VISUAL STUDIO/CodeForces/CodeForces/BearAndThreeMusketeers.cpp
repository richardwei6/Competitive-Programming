
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


void solve() {
	int n, m;
	cin >> n >> m;
	ll mn = inf;
	map<int, int> numt;
	vector<pair<int, int>> a;
	vector<vector<int>> c(n, vector<int>(n, 0));
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		c[x-1][y-1] = 1;
		c[y - 1][x - 1] = 1;
		numt[x-1]++;
		numt[y - 1]++;
		a.push_back(make_pair(x-1, y-1));
	} // zero based map and 2d array

	// brute force alg
	for (int i = 0; i < m; i++) { // for each connection
		int u = a[i].first, v = a[i].second;
		for (int j = 0; j < n; j++) { // for each person
			if (c[u][j] == 1 && c[v][j] == 1) { // connected
				ll s = numt[u] + numt[v] + numt[j] - 6; // all connections between people - the same number of connections between each other
				if (s < mn) {
					mn = s;
				}
			}
		}
	}

	if (mn < inf) {
		cout << mn << endl;
	}
	else {
		cout << -1 << endl;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}

/**/
