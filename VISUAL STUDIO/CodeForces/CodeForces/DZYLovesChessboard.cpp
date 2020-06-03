
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

V<V<char>> a;

int n, m;

void dfs(int i, int j, int x) {

	a[i][j] = (x == 1 ? 'W' : 'B');
	if (i + 1 < n && a[i + 1][j] == '.') {
		dfs(i + 1, j, !x);
	}
	if (i - 1 > -1 && a[i - 1][j] == '.') {
		dfs(i - 1, j, !x);
	}
	if (j + 1 < m && a[i][j + 1] == '.') {
		dfs(i, j + 1, !x);
	}
	if (j - 1 > -1 && a[i][j - 1] == '.') {
		dfs(i, j - 1, !x);
	}
}

void solve() {
	cin >> n >> m;
	a = V<V<char>>(n, V<char>(m));
	for (auto& i : a) {
		for (char& j : i) {
			cin >> j;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == '.') {
				dfs(i, j, 0);
			}
		}
	}


	for (auto i : a) {
		for (char j : i) {
			cout << j;
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
