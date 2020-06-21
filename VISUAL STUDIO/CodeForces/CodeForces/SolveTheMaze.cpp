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
 
 
V<pair<int, int>> adj = { {1,0}, {0, 1}, {-1, 0}, {0, -1} };
V<V<char>> g;
 
int n, m;
 
int visited[51][51]{}, visitedDFS[51][51]{};
 
 
bool dfs(int i, int j) {
	if (i == n - 1 && j == m - 1) 
		return 1;
	visitedDFS[i][j] = 1;
	if (g[i][j] == 'G') {
		visited[i][j] = 1;
	}
	for (auto a : adj) {
		int x = a.first + i, y = a.second + j;
		if (x < n && x > -1 && y < m && y > -1) {
			if (visitedDFS[x][y] == 0 && g[x][y] != '#') {
				if (dfs(x, y) == 1) {
					return 1;
				}
			}
		}
	}
	return 0;
}
 
bool setWalls(int i, int j) {
	for (auto a : adj) {
		if (a.first + i < n && a.first + i > -1 && a.second + j < m && a.second + j > -1) {
			if (g[a.first + i][a.second + j] == '.') {
				g[a.first + i][a.second + j] = '#';
			}
			else if (g[a.first + i][a.second + j] == 'G') {
				return 0;
			}
		}
	}
	return 1;
}
 
 
void solve() {
	memset(visited, 0, sizeof(visited));
	memset(visitedDFS, 0, sizeof(visitedDFS));
	cin >> n >> m;
	V<pair<int, int>> f, bad;
	g = V<V<char>>(n, V<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> g[i][j];
			if (g[i][j] == 'G') {
				f.PS({i,j});
			}
			else if (g[i][j] == 'B'){
				bad.PS({ i,j });
			}
		}
	}
	if (f.size()) {
		for (auto i : bad) {
			if (!setWalls(i.first, i.second)) {
				cout << "No" << endl;
				return;
			}
		}// set all around bad to wall
		for (auto i : f) {
			if (visited[i.first][i.second] == 0) {
				memset(visitedDFS, 0, sizeof(visitedDFS));
				if (!dfs(i.first, i.second)) {
					cout << "No" << endl;
					return;
				}
			}
		}
	}
	cout << "Yes" << endl;
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
