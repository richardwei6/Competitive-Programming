/**

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

void solve() {
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	int single = 0, doub = 0;
	V<V<char>> a(n, V<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	if ((double)y / 2 < x) {
		for (int i = 0; i < n; i++) {
			for (int j = 1; j < m; j++) {
				if (a[i][j - 1] == '.' && a[i][j] == '.') {
					doub++;
					a[i][j - 1] = a[i][j] = '*';
				}
			}
		}
	}

	for (auto i : a) {
		for (char j : i) {
			if (j == '.') {
				single++;
			}
		}
	}

	cout << (single * x) + (doub * y) << endl;
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
