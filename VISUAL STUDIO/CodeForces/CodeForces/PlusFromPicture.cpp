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


int p[500][500]{};
int passed = 0;
V<V<char>> g;
int h, w;
int f = 0, n = 0;
V<pair<int, int>> adj = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

void Sdfs(int i, int j, int m) {
	p[i][j] = 1;
	int x = adj[m].first + i, y = adj[m].second + j;
	if (x > -1 && x < h && y > -1 && y < w && g[x][y] == '*' && p[x][y] == 0) {
		Sdfs(x, y, m);
	}
}

void dfs(int i, int j) {
	if (g[i][j] == '*') {
		for (auto m : adj) {
			int x = i + m.first, y = j + m.second;
			if (x > -1 && x < h && y > -1 && y < w) {
				if (g[x][y] != '*') {
					return;
				}
			}
			else {
				return;
			}
		}
		passed = 1;
		f = 0, n = -1;
		p[i][j] = 1;
		for (int m = 0; m < 4; m++) {
			int x = i + adj[m].first, y = j + adj[m].second;
			if (x > -1 && x < h && y > -1 && y < w) {
				if (p[x][y] == 0 && g[x][y] == '*') {
					Sdfs(x, y, m);
				}
			}
		}
	}
}

void solve() {
	cin >> h >> w;
	g = V<V<char>>(h, V<char>(w));
	for (auto& i : g) {
		for (char& j : i) {
			cin >> j;
		}
	}
	for (; f < h; f++) {
		for (; n < w; n++) {
			if (passed == 0) {
				dfs(f, n);
			}
			else {
				if (p[f][n] == 0 && g[f][n] != '.') {
					cout << "NO" << endl;
					return;
				}
			}
		}
		n = 0;
	}
	cout << (passed ? "YES" : "NO") << endl;
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
