
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
	int n, m;
	cin >> n >> m;
	V<V<char>> a(n, V<char>(m));
	for (auto& i : a) {
		for (char& j : i) {
			cin >> j;
		}
	}

	int c = 0;
	for (int i = 0; i < n; i++) {
		int t = 0;
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 'S') {
				t = -1;
				break;
			}
			else {
				if (a[i][j] == '.') {
					t++;
				}
			}
		}
		if (t != -1) {
			for (int j = 0; j < m; j++) {
				a[i][j] = 'X';
			}
			c += t;
		}
	}

	for (int i = 0; i < m; i++) {
		int t = 0;
		for (int j = 0; j < n; j++) {
			if (a[j][i] == 'S') {
				t = -1;
				break;
			}
			else {
				if (a[j][i] == '.') {
					t++;
				}
			}
		}
		if (t != -1) {
			for (int j = 0; j < n; j++) {
				a[j][i] = 'X';
			}
			c += t;
		}
	}
	cout << c << endl;

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
