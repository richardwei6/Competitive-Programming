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

int a[100000]{}, r[100000]{};
V<pair<ll, ll>> g[100000]{};
int total = 0;

int dfsC(int x) {
	int c = 1;
	for (auto i : g[x]) {
		c += dfsC(i.first);
	}
	return c;
}


void dfs(int x, ll s) { // s is curr distance from 0
	if (s > a[x]) {
		total += dfsC(x);
		return;
	}
	for (auto i : g[x]) {
		dfs(i.first, max(i.second, i.second + s));
	}
}

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i <= n - 1; i++) {
		int p, c;
		cin >> p >> c;
		p--;
		g[p].PS({ i, c });
	}
	dfs(0, 0);
	cout << total << endl;
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
