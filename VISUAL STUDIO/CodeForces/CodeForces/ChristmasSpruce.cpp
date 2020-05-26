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


map<int, V<int>> a; // children

bool isLeaf(int n) {
	return a[n].size() == 0;
}

void solve() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		int j;
		cin >> j;
		a[j].PS(i);
	}
	for (auto i : a) {
		if (isLeaf(i.first) == 0) {
			int l = 0;
			for (int j : i.second) {
				if (isLeaf(j)) {
					l++;
				}
			}
			if (l < 3) {
				cout << "No" << endl;
				return;
			}
		}
	}
	cout << "Yes" << endl;
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
