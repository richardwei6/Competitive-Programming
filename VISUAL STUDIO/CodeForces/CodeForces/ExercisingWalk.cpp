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


void solve() {
	ll a, b, c, d, x, y, x1, y1, x2, y2;
	cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
	if (a > 0 && b > 0) {
		if (x1 == x && x2 == x) {
			cout << "NO" << endl;
			return;
		}
		if (a < b) {
			b -= a;
			a = 0;
		}
		else {
			a -= b;
			b = 0;
		}
	}
	if (c > 0 && d > 0) {
		if (y2 == y && y1 == y) {
			cout << "NO" << endl;
			return;
		}
		if (c < d) {
			d -= c;
			c = 0;
		}
		else {
			c -= d;
			d = 0;
		}
	}
	x -= a;
	x += b;
	y -= c;
	y += d;
	cout << (x1 <= x && x <= x2 && y1 <= y && y <= y2 ? "YES" : "NO") << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/
