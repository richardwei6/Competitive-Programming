/*

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <set>
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
#define PS(x) emplace_back(x)

int n, m;

vector<int> commEle(int a[100][100], int b[100][100]) {
	set<int> o, x;
//	cout << "comm" << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j]) {
				x.insert(j);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i][j] && x.count(j)) {
				o.insert(j);
			}
		}
	}
	return vector<int>(begin(o),end(o));
}

//vector<vector<set<int>>> a;
//set<int> a[100][100]{};
int a[100][100][100]{};

bool connected(int c, int e, int s, int prev) { // color and end node and start node
	// alg - start from the staring node row and look through the set at each node to see if it contains the color. if the color is contained, start a recursion
	if (e == s || a[s][e][c]) {
		return 1;
	}
	for (int i = 0; i < n; i++) {
		if (a[s][i][c] && i != prev) {
			if (connected(c,e,i,s)) { // start recursion
				return 1;
			}
		}
	}
	return 0;
}

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z; // between x and y - z is color
		a[x - 1][y - 1][z] = 1;
		a[y - 1][x - 1][z] = 1;
	}

	int q;
	cin >> q;
	while (q--) {
		int x, y, c = 0;
		cin >> x >> y;
		// only need to check x for connections
		vector<int> t  = commEle(a[x-1], a[y-1]); // common colors that each node shares
		for (int j = 0; j < t.size(); j++) { // for each color that the two nodes have in common!
			c += connected(t[j], y-1, x-1, -1);
		}
		cout << c << endl;
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
