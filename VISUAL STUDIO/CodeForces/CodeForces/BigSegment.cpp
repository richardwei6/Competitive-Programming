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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) push_back(x)
#define IT(x) begin(x),end(x)

void solve() {
	int n;
	cin >> n;
	V<pp> a;
	map<pp, int> p;
	int mn = INT_MAX, mx = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		mn = min3(mn, x, y);
		mx = max3(mx, x, y);
		a.push_back({ x,y });
		p[{x, y}] = i;
	}
	sort(IT(a), 
		[](const pp a, const pp b) {
		return (a.second - a.first) < (b.second - b.first);
	});
	if (a[n - 1].first <= mn && a[n - 1].second >= mx) {
		cout << p[a[n - 1]]+1 << endl;
	}
	else {
		cout << -1 << endl;
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
