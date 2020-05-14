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

int tree[200001]{}, mx[200001]{};
set<int> v;
int n;

void display() {
	cout << "TREE - ";
	for (int i = 0; i < n; i++) {
		cout << tree[i] << " ";
	}
	cout << endl;

	cout << "mx - ";
	for (int i = 0; i < n; i++) {
		cout << mx[i] << " ";
	}
	cout << endl;

	cout << "set - ";
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
}



void update(int p, int x) {
	auto it = v.upper_bound(p);
	if (it == v.end()) { // last vessel
		return;
	}
	p = *it;
	if (tree[p] <= x) { // overflow happens
		x -= tree[p]; // subtract what you can fit into current
		tree[p] = 0; // set that vessel to full
		v.erase(it); // erase this vessel from the avalible vessels
		if (x > 0) { // if there is still water left - look for next vessel in set
			update(p, x); 
		}
	}
	else {
		tree[p] -= x; // normal
	}
}




void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		mx[i] = tree[i];
		if (tree[i] > 0) {
			v.insert(i); // store vessel pos as a possible vessel for filling
		}
	}

	ll q;
	cin >> q;
	while (q--) {
		ll t;
		cin >> t;
		if (t == 1) {
			ll p, x; // p is iterator and x is liters added
			cin >> p >> x;
			update(p - 2, x);
		}
		else {
			ll k;
			cin >> k;
			cout << mx[k - 1] - tree[k - 1] << endl;
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
