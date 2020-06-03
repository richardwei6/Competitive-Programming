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
	int n;
	cin >> n;
	V<V<int>> a(n);
	V<int> p(n, 1);
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int t;
			cin >> t;
			a[i].PS(t-1);
		}
	}
	V<int> rj;
	for (int i = 0; i < n; i++) {
		if (a[i].size()) {
			int c = -1;
			for (int j = 0; j < a[i].size(); j++) {
				if (p[a[i][j]] == 1) {
					c = a[i][j];
					break;
				}
			}
			if (c == -1) {
				rj.PS(i);
			}
			else {
				p[c] = 0;
			}
		}
		else {
			rj.PS(i);
		}
	}

	if (rj.size() == 0) {
		cout << "OPTIMAL" << endl;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (p[i] == 1) {
				cout << "IMPROVE" << endl;
				cout << rj[0]+1 << " " << i+1 << endl;
				return;
			}
		}
		cout << "OPTIMAL" << endl;
	}
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
