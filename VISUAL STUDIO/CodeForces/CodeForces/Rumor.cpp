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

V<ll> p;
V<pair<ll, ll>> c;
V<V<ll>> g;

void dfs(ll x) {
	p[x] = 1;
	for (ll i : g[x]) {
		if (p[i] == 0) {
			dfs(i);
		}
	}
}

void solve() {
	ll n, m;
	cin >> n >> m;
	p = V<ll>(n);
	c = V<pair<ll, ll>>(n);
	g = V<V<ll>>(n, V<ll>());
	for (ll i = 0; i < n; i++) {
		cin >> c[i].first;
		c[i].second = i;
	}
	for (ll i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		x--, y--;
		g[x].PS(y);
		g[y].PS(x);
	}
	sort(IT(c), [](pair<ll,ll> a, pair<ll,ll> b) {
		return a.first < b.first;
	});
	ll t = 0;
	for (auto i : c) {
		if (p[i.second] == 0) {
			dfs(i.second);
			t += i.first;
		}
	}
	cout << t << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
///	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
