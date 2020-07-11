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
	int l;
	cin >> l;
	V<int> a(l);
	for (int& i : a) {
		cin >> i;
	}
	int j = -1, k = -1, p = 0, mx = 0, n = 0, mxN = 0;
	for (int i = 0; i < a.size() - 1; i++) {
		mxN = max3(mxN, a[i], a[i+1]);
		if (a[i+1] > a[i]){
			if (k != -1) {
				k = -1;
				j = -1;
			}
			if (j == -1) {
				j = i;
			}
		}
		else {
			if (a[i+1] < a[i]) {
				if (j != -1) {
					k = i + 1;
				}
				if (k != -1 && j != -1) {
					mx = max(mx, k - j + 1);
				}
			}
			else {
				k = -1;
				j = -1;
			}
		}
	}
	if (k != -1 && j != -1) {
		mx = max(mx, k - j + 1);
	}
	cout << mx << " " << mxN << endl;
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
