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

V<V<int>> g;
int targ[101]{};

bool dfs(int p, int prev) {
	if (targ[p] == 1) {
		return 1;
	}
	bool t = 0;
	for (int i : g[p]) {
		if (i != prev) {
			t |= dfs(i, p);
		}
	}
	return t;
}

void solve() {
	int n, m;
	cin >> n >> m;
	V<int> a(n);
	g = V<V<int>>(n);
	for (int& i : a)
		cin >> i;
	for (int i = 0; i < m; i++) {
		int j;
		cin >> j;
		g[j].PS(j - 1);
		g[j - 1].PS(j);
	}
	V<int> t = a;
	sort(IT(t));
	map<int, V<int>> belong;
	for (int i = 0; i < n; i++) {
		belong[t[i]].PS(i);
	}
	for (int i = 0; i < n; i++) {
		memset(targ, 0, sizeof(targ));
		for (int j : belong[a[i]]) {
			targ[j] = 1;
		}
		if (dfs(i, -1) == 0) {
			NO;
			return;
		}
	}
	YES;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
