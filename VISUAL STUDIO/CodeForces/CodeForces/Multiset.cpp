
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
#define PS(x) push_back(x)
#define IT(x) begin(x),end(x)
#define mod 1000000007

class fenTree {
	V<ll> t;
public: 
	fenTree(int n) { // constructor
		t.assign(n + 1, 0);
	}
	ll sm(int a) { // 1 - a sum
		ll sum = 0;
		while (a > 0) {
			sum += t[a];
			a -= a & (-a);
		}
		return sum;
	}

	ll sm(int a, int b) { // a - b sum
		return sm(b) - (a == 1 ? 0 : sm(a - 1));
	}

	void add(int k, ll v) { // add v times to kth
		while (k < t.size()) {
			t[k] += v;
			k += k & (-k);
		}
	}

	int find(int k) { // binary search for kth term
		int l = 1, r = t.size() - 1;
		int p = 0;
		while (l <= r) {
			int m = (l + r) / 2;
			if (sm(m) >= k) {
				p = m;
				r = m - 1;
			}
			else {
				l = m + 1;
			}
		}
		return p;
	}

};
 
void solve() {
	int n, q;
	cin >> n >> q;
	V<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	fenTree t(n); // create tree
	for (auto i : a) {
		t.add(i, 1); // inital contruction of tree
	}
	while (q--) {
		int k;
		cin >> k;
		if (k >= 1 && k <= n) {
			t.add(k, 1);
		}
		else if (k < 0) {
			t.add(t.find(-k), -1); // subtract one from the value
		}
	}
	cout << t.find(1) << endl;
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
