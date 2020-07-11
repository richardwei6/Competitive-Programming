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
deque<pair<int, int>> need;
V<int> vis;
V<pair<int, int>> ans;

void dfs(int n, int v, int prev) { // now pos / valueand prev pos
	vis[n] = 1;
	ans.PS({ prev+1, n+1 });
	while (v && need.size() > 0) {
		pair<int, int> t = need.front();
		need.pop_front();
		dfs(t.second, t.first, n);
		v--;
	}
}

void solve() {
	int n;
	cin >> n;
	V<int> a(n);
	vis = a;
	cin >> a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		need.PS({ a[i] , i});
	}
	sort(IT(need), [](pair<int,int> a, pair<int,int> b) {
		return a.first > b.first;
	});

	int c = a[0];
	vis[0] = 1;
	while (c && need.size() > 0){
		pair<int, int> t = need.front();
		need.pop_front();
		dfs(t.second, t.first, 0);
		c--;
	}

	for (int i : vis) {
		if (i == 0) {
			cout << -1 << endl;
			return;
		}
	}
	cout << ans.size() << endl;
	for (auto i : ans) {
		cout << i.first << " " << i.second << endl;
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
