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
#define mod 1000000007


void solve() {
	int n;
	cin >> n;
	V<int> a(n);
	ll s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}
	if (s % 3) {
		cout << 0 << endl;
	}
	else {
		ll t = 0, p = s / 3;
		V<int> pos(n, 0);
		for (int i = 0; i < n; i++) { // find left == part and store pos 
			if (i) 
				pos[i] = pos[i - 1];
			t += a[i];
			if (t == p)  // sum so far is equal to needed size
				pos[i]++;
		}
		t = 0;
		ll o = 0;
		for (int i = n - 1; i >= 2; i--) { // find right sum == part
			t += a[i];
			if (t == p) {
				o += pos[i - 2];
			}
		}
		cout << o << endl;
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