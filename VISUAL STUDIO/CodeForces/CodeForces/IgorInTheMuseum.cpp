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


V<pair<int, int>> adj = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

int n, m, k;
char g[1000][1000]{};
int passed[1000][1000]{}, val[1000][1000]{};

V<pair<int, int>> path;
int cSum = 0;

void dfs(int i, int j) {
	passed[i][j] = 1;
	path.PS({ i, j });
	for (auto k : adj) {
		int x = k.first + i, y = k.second + j;
		if (x < n && x > -1 && y < m && y > -1 && passed[x][y] == 0) {
			if (g[x][y] == '*') {
				cSum++;
			}
			else {
				dfs(x, y);
			}
		}
	}
}

void solve() {
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
		}
	}
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		if (passed[x-1][y-1] == 0) {
			cSum = 0;
			path.clear();
			dfs(x - 1, y - 1);
			for (auto k : path) {
				val[k.first][k.second] = cSum;
			}
		}
		cout << val[x - 1][y - 1] << endl;
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
