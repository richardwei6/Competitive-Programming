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
#define pp pair<int,int>
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

void D(V<ll> a) {
	for (ll i : a)
		cout << i << " ";
	cout << endl;
}

V<ll> v;
V<V<ll>> g;

bool f = 0;

void dfs(ll x, ll s) {
	if (v[x] == -1) {
		if (g[x].size() == 0) {
			v[x] = s;
		}
		else {
			ll mn = LONG_MAX;
			for (ll i : g[x]) {
				if (v[i] != -1) {
					mn = min(mn, v[i]);
				}
			}
			v[x] = mn;
		}
	}
	if (v[x] < s) {
		f = 1;
		return;
	}
	for (ll i : g[x]) {
		dfs(i, v[x]);
	}
}

ll t = 0;

void dfs2(ll x, ll s) {
	t += v[x] - s;
	for (ll i : g[x]) {
		dfs2(i, v[x]);
	}
}

void solve() {
	ll n;
	cin >> n;
	v = V<ll>(n);
	g = V<V<ll>>(n);
	for (ll i = 1; i < n; i++) {
		ll j;
		cin >> j;
		j--;
		g[j].PS(i);
	}
	for (ll& i : v)
		cin >> i;
	for (ll i : g[0]) {
		dfs(i, v[0]);
	}
	if (f){
		cout << -1 << endl;
	}
	else {
		t = v[0];
		for (ll i : g[0]) {
			dfs2(i, v[0]);
		}
		cout << t << endl;
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
