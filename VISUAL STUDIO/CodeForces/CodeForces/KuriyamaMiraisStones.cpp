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
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
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


void solve() {
	ll n;
	cin >> n;
	V<ll> p(n+1); // unsorted prefix sum
	V<ll> a(n+1); // array
	ll t;
	cin >> t;
	p[1] = t;
	a[1] = t;
	for (ll i = 2; i <= n; i++) {
		cin >> a[i];
		p[i] = p[i - 1] + a[i];
	}
	sort(IT(a));
	for (ll i = 1; i <= n; i++) {
		a[i] += a[i - 1];
	}
	ll m;
	cin >> m;
	while (m--) {
		cin >> t;
		if (t == 1) {
			ll x, y;
			cin >> x >> y;
			cout <<  p[y] - p[x-1] << endl;
		}
		else {
			ll x, y;
			cin >> x >> y;
			cout << a[y] - a[x-1] << endl;
		}
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
