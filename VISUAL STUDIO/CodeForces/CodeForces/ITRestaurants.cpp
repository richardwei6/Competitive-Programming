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

void D(V<ll> a) {
	for (ll i : a)
		cout << i << " ";
	cout << endl;
}

int n;
V<V<int>> g;
int num[5105]{};
bool dp[5105][5105]{};
set<int> ans;

void dfs(int u, int fa) {
	num[u] = 1;
	dp[u][0] = 1;
	for (int i = 0; i < g[u].size(); i++) {
		int v = g[u][i];
		if (v == fa) {
			continue;
		}
		dfs(v, u);
		num[u] += num[v];
		for (int i = n - 1; i > -1; i--) {
			if (dp[u][i]) {
				dp[u][i + num[v]] = 1;
			}
		}
	}
	int fn = n - num[u];
	for (int i = n - 1; i > -1; i--) {
		if (dp[u][i]) {
			dp[u][i + fn] = 1;
		}
	}
	for (int i = 1; i < n - 1; i++) {
		if (dp[u][i]) {
			ans.insert(i);
		}
	}
}

void solve() {
	cin >> n;
	g = V<V<int>>(n);
	for (int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		g[u].PS(v);
		g[v].PS(u);
	}
	memset(dp, 0, sizeof(dp));
	dfs(1, -1);
	cout << ans.size() << endl;
	for (int i : ans) {
		cout << i << " " << n - i-1 << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//int t; cin >> t;
	//while (t--)
		solve();
	return 0;
}


/**/
