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

int passed[50][50]{};
V<V<char>> t;
V<pair<int, int>> adj = { {-1, 0}, {0, -1}, {1, 0}, {0, 1} };
int n, m;

bool dfs(int i, int j, int edges, int nodes) {
	int p = 0;
	passed[i][j] = 1;
	for (auto a : adj) {
		int x = i + a.first, y = j + a.second;
		if (x < n && x > -1 && y < m && y > -1 && t[x][y] == t[i][j]) {
			if (passed[x][y] == 0) {
				if (dfs(x, y, edges + 1, nodes + 1)) {
					return 1;
				}
			}
			else {
				p++;
			}
		}
	}
	if (p == 2) {
	//	cout << "DFS - " << i << " : " << j << " = " << t[i][j] << endl;
	//	cout << "EDGES - " << edges << " = " << nodes << endl;
		return (edges == nodes);
	}
	return 0;
}

void solve() {
	cin >> n >> m;
	t = V<V<char>>(n, V<char>(m));
	for (auto& i : t) {
		for (char& j : i) {
			cin >> j;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (passed[i][j] == 0 && dfs(i, j, 0, 0)) {
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "No" << endl;
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
