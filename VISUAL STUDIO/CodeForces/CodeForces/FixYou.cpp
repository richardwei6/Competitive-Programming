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
#define dq deque
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

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

V<V<int>> p;
V<V<char>> g;
int n, m;
int c = 0;

void dfs(int x, int y) {
	p[x][y] = 1;
	if (x == n - 1 && y == m - 1) {
		return;
	}
	else {
		if (g[x][y] == 'R') {
			if (y + 1 < m) {
				if (p[x][y + 1] == 0) {
					dfs(x, y + 1);
				}
			}
			else {
				c++;
				if (p[x + 1][y] == 0) {
					dfs(x + 1, y);
				}
			}
		}
		else {
			if (x + 1 < n) {
				if (p[x + 1][y] == 0) {
					dfs(x + 1, y);
				}
			}
			else {
				c++;
				if (p[x][y + 1] == 0) {
					dfs(x, y + 1);
				}
			}
		}
	}
}
	


void solve() {
	cin >> n >> m;
	c = 0;
	g = V<V<char>>(n, V<char>(m));
	p = V<V<int>>(n, V<int>(m));
	for (auto& i : g) {
		for (char& j : i) {
			cin >> j;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (p[i][j] == 0) {
				dfs(i, j);
			}
		}
	}
	cout << c << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed << setprecision(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
