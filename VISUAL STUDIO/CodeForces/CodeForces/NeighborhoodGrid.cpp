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

V<pair<int, int>> adj = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

void solve() {
	int n, m;
	cin >> n >> m;
	bool p = 1;
	int a[300][300]{};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] > 4) {
				p = 0;
			}
			int c = 0;
			for (auto k : adj) {
				int x = i + k.first, y = j + k.second;
				if (x > -1 && x < n && y > -1 && y < m) {
					c++;
				}
			}
			if (a[i][j] > 0) {
				if (c < a[i][j]) {
					p = 0;
				}
			}
			a[i][j] = c;
				
		}
	}
	if (p) {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "NO" << endl;
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
