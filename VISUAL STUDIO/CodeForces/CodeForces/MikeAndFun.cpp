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

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


int mxConsec(V<int> a) {
	int c = 0, x = 0;
	for (int i : a) {
		if (i == 0){
			x = max(x, c);
			c = 0;
		}
		else {
			c++;
		}
	}
	return max(c, x);
}

void solve() {
	int n, m, q;
	cin >> n >> m >> q;
	V<int> r(n);
	V<V<int>> g(n, V<int>(m));
	for (int i = 0; i < n; i++) {
		int c = 0, x = 0;
		for (int& j : g[i]) {
			cin >> j;
			if (j == 0) {
				x = max(x, c);
				c = 0;
			}
			else {
				c++;
			}
		}
		r[i] = max(c, x);
	}
	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		g[x][y] = !g[x][y];
		r[x] = mxConsec(g[x]);
		int mx = 0;
		for (int j : r) {
			mx = max(mx, j);
		}
		cout << mx << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
