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
	string a, b;
	cin >> a >> b;
	V<pair<char, int>> x, y;
	int c = 0;
	char t = a[0];
	for (int i = 0; i < a.size(); i++) {
//		cout << a[i] << " " << c << endl;
		if (t == a[i]) {
			c++;
		}
		else {
			x.PS({ t, c });
			t = a[i];
			c = 0;
		}
	}
//	if (c > 0) {
		x.PS({ t,c });
//	}
	t = b[0];
	c = 0;
	for (int i = 0; i < b.size(); i++) {
		if (t == b[i]) {
			c++;
		}
		else {
			y.PS({ t,c });
			t = b[i];
			c = 0;
		}
	}
//	if (c > 0) {
		y.PS({ t,c });
//	}

	if (x.size() != y.size()) {
		cout << "NO" << endl;
		return;
	}
	for (int i = 0; i < x.size(); i++) {
		if (x[i].first != y[i].first || x[i].second > y[i].second) {
			cout << "NO" << endl;
			return;
		}

	}
	cout << "YES" << endl;
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
