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


 // fix issue where there arent enough points to base off of

map<int, int> m;

void solve() {
	int n;
	cin >> n;
	V<int> a(n + 1);
	set<int> d, d2;
	for (int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		d.insert(u);
		d2.insert(v);
		m[u] = v;
		if (!u && v) {
			a[2] = v;
		}
	}
	for (int e : d) {
		if (d2.find(e) == d2.end()) {
			a[1] = e;
			break;
		}
	}
	for (int i = 3; i <= n; i++) {
		a[i] = m[a[i - 2]];
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
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
