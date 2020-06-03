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


ll sumPrevNum(ll n) {
	return n * (n + 1) / 2;
}

void solve() {
	ll n, len;
	cin >> n >> len;
	V<ll> a(2 * n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[n + i] = a[i];
	}
	n *= 2;
	V<ll> b = { 0 }, c = { 0 };
	for (int i = 0; i < n; i++) {
		b.PS(b.back() + a[i]);
		c.PS(c.back() + sumPrevNum(a[i]));
	}
	ll o = 0;
	for (int i = 0; i < n; i++) {
		if (b[i + 1] >= len) {
			ll z = upper_bound(IT(b), b[i + 1] - len) - begin(b), cnt = c[i + 1] - c[z], days = b[i+1] - b[z], too = len - days;
			cnt += sumPrevNum(a[z-1]);
			cnt -= sumPrevNum(a[z - 1] - too);
			o = max(o, cnt);
		}
	}
	cout << o << endl;
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
