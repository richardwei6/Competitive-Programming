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

void D(V<ll> a) {
	for (ll i : a)
		cout << i << " ";
	cout << endl;
}

int n;
map<ll, int> t;
V<ll> dfs(ll x, V<ll> c) {
	if (c.size() == n) {
		return c;
	}
	V<ll> a, b;
	if (t[x*2] == 1) {
		V<ll> p = c;
		p.PS(x * 2);
		a = dfs(x * 2, p);
	}
	if (x%3 == 0 && t[x/3] == 1) {
		V<ll> p = c;
		p.PS(x / 3);
		b = dfs(x / 3, p);
	}
	return a.size() > b.size() ? a : b;
}

void solve() {
	cin >> n;
	V<ll> a(n);
	for (ll& i : a) {
		cin >> i;
		t[i] = 1;
	}
	for (ll i : a) {
		V<ll> c = dfs(i, {i});
		if (c.size() == n) {
			D(c);
			return;
		}
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
