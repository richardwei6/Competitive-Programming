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

int p[20][20]{};
int x[20], y[20]{};
int n, m;

void dfs(int a, int b) {
	p[a][b] = 1;
	int i = a + y[b];
	int j = b + x[a];
	if (i > -1 && i < n && p[i][b] == 0) {
		dfs(i, b);
	}
	if (j > -1 && j < m && p[a][j] == 0) {
		dfs(a, j);
	}
}

void solve() {
	cin >> n >> m;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < n; i++) {
		if (a[i] == '>') {
			x[i] = 1;
		}
		else {
			x[i] = -1;
		}
	}
	for (int i = 0; i < m; i++) {
		if (b[i] == 'v') {
			y[i] = 1;
		}
		else {
			y[i] = -1;
		}
	}
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			memset(p, 0, sizeof(p));
			dfs(a, b);
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
			//		cout << p[i][j] << " ";
					if (p[i][j] == 0) {
							NO;
							return;
					}
				}
		//		cout << endl;
			}

		}
	}
	YES;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
