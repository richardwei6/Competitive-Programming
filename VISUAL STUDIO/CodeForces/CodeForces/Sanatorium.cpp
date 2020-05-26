
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

void solve() {
	ll a[3]{}; // a, b, c coresponds to b, d, s respectively
	cin >> a[0] >> a[1] >> a[2];
	ll mxI = 0, d = a[0], s = 0;
	for (int i = 1; i < 3; i++) {
		if (a[i] > d) {
			d = a[i];
			mxI = i;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (i != mxI) {
			if (a[mxI] - a[i] > 1) {
				s += a[mxI] - a[i] - 1;
			}
		}
	}
	cout << s << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
///	int t; cin >> t;
//	while (t--)
		solve();
	return 0;
}


/**/
