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
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


void solve() {
	int n, m;
	cin >> n >> m;
	V<V<int>> g(n, V<int>(m));
	for (auto& i : g) {
		for (int& j : i) {
			cin >> j;
		}
	}
	V<pair<int, int>> ans;
	if (n < m) {
		for (int i = 0; i < n; i++) {
			int mn = INT_MAX;
			for (int j : g[i]) {
				mn = min(mn, j);
			}
			if (m > 0) {
				for (int& j : g[i]) {
					j -= mn;
				}
				while (mn--) {
					ans.PS({ i, 0 });
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		int mn = INT_MAX;
		for (int j = 0; j < n; j++) {
			mn = min(mn, g[j][i]);
		}
		for (int j = 0; j < n; j++) {
			g[j][i] -= mn;
		}
		while (mn--)
			ans.PS({ i, 1 });
	}
	for (int i = 0; i < n; i++) {
		int mn = INT_MAX;
		for (int j : g[i]) {
			mn = min(mn, j);
		}
		for (int& j : g[i]) {
			j -= mn;
		}
		while (mn--) 
			ans.PS({ i, 0 });

	}
	for (auto i : g) {
		for (int j : i) {
			if (j > 0) {
				cout << -1 << endl;
				return;
			}
		}
	}
	cout << ans.size() << endl;
	for (auto i : ans) {
		cout << (i.second == 1 ? "col" : "row") << " " << i.first+1 << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
		solve();
	return 0;
}


/**/
