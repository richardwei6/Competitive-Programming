
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

V<int> mx, c;
set<int> unfilled; // pos of unfilled 

void fill(int p, int x) {
	auto it = unfilled.upper_bound(p); // pth vessel not filled?
	if (it == end(unfilled)) { // doesnt exist to return
		return;
	}
	p = *it;
	if (c[p] + x >= mx[p]) {
		c[p] += x;
		x = c[p] - mx[p];
		c[p] = mx[p];
		unfilled.erase(it); // erase from set as its full
		if (x > 0) { // get rid of cases where x + c[p] == mx[p]
			fill(p, x);
		}
	}
	else {
		c[p] += x;
	}
}


void solve() {
	int n;
	cin >> n;
	mx = c = V<int>(n);
	for (int i = 0; i < n; i++) {
		cin >> mx[i];
		if (mx[i] > 0) { // has capacity
			unfilled.insert(i);
		}
	}
	int q;
	cin >> q;
	while (q--) {
		int t;
		cin >> t;
		if (t == 1) {
			int p, x;
			cin >> p >> x;
			fill(p - 2, x);
		}
		else {
			int k;
			cin >> k;
			cout <<  c[k - 1] << endl;
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
