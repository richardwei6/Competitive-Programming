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

char maze[510][510]{};

bool used[510][510]{};
int n, m, k;

bool valid(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int u, int v) {
	used[u][v] = 1;
	k--;
	for (int i = 0; i < 4; i++) {
		if (k) {
			int x, y;
			x = u + dx[i];
			y = v + dy[i];
			if (valid(x, y) && maze[x][y] == '.' && used[x][y] == 0) {
				dfs(x, y);
			}
		}
	}
}

void solve(){
	int i, j;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		cin >> maze[i];
	}
	V<pair<int, int>> safe;
	for (i=0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (maze[i][j] == '.') {
				safe.push_back({ i,j });
			}
		}
	}
	k = safe.size() - k;
	dfs(safe[0].first, safe[0].second);
	for (i = 0; i < safe.size(); i++) {
		if (used[safe[i].first][safe[i].second] == 0) {
			maze[safe[i].first][safe[i].second] = 'X';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << maze[i][j];
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
