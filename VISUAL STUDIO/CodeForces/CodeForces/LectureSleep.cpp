
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
	int n, k;
	cin >> n >> k;
	V<int> a(n), t(n);
	for (int& i : a) {
		cin >> i;
	}
	int first = -1;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
		if (t[i] == 0 && first == -1) {
			first = i;
		}
	}
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (t[i]) {
			s += a[i];
		}
	}
//	cout << "initial sum - " << s << endl;
	if (first != -1) {
		int c = 0;
		for (int i = 0; i < k; i++) {
			if (t[i] == 0) {
				c += a[i];
			}
		}
//		cout << "c - " << c << endl;
		int mx = c;
		for (int i = 1; i + k - 1 < n; i++) {
			if (t[i-1] == 0) {
				c -= a[i - 1];
			}
			if (t[i+k-1] == 0) {
				c += a[i + k - 1];
			}
	//		cout << i << " - " << c << endl;
			mx = max(mx, c);
		}
		cout << mx + s << endl;
	}
	else {
		cout << s << endl;
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
