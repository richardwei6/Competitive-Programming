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

void D(deque<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

V<int> a, r; // a is tolerance
V<V<pair<int, int>>> g; // first is node second is weight

int validCon(int x) {
	int c = 0;
	for (auto i : g[x]) {
		if (r[i.first] == 0) {
			c++;
		}
	}
	return c;
}


void remove(int x, ll sum, deque<int> w) { // max weight sum
	// stop if x has more than one path
	if (a[x] < sum) {
	//	cout << "REMOVE - " << x << " = ";
	//	D(w);
		r[x] = 1;
		sum -= w.back();
		w.pop_back();
		for (auto i : g[x]) {
			if (r[i.first] == 0 && validCon(i.first) == 1) {
				remove(i.first, sum, w);
			}
		}
	}
}

void dfs(int x, int prev, deque<int> w) { // weights
	if (g[x].size() == 1 && g[x][0].first == prev) {
		// leaf	
	//`	cout << "leaf - " << x << endl;
		ll mxS = 0, s = 0;
		for (int i = w.size() - 1; i > -1; i--) {
			s += w[i];
			mxS = max(mxS, s);
		}
		remove(x, mxS, w);
		return;
	}
	for (auto i : g[x]) {
		if (i.first != prev) {
			deque<int> t = w;
			t.PS(i.second);
			dfs(i.first, x, t);
		}
	}
}

void solve() {
	int n;
	cin >> n;
	a = r = V<int>(n, 0); 
	g =  V<V<pair<int, int>>>(n, V<pair<int, int>>());
	for (int& i : a)
		cin >> i;
	for (int i = 1; i <= n - 1; i++) {
		int p, c;
		cin >> p >> c;
		p--;
		g[i].PS({ p, c});
		g[p].PS({ i, c});
	}

	dfs(0, -1, {});
	int ans = 0;
	for (int i : r) {
		ans += i;
	}
	cout << ans << endl;
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
