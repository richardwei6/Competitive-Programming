
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

int n;
V<V<char>> a;

bool check(int i, int j) {
	V<pair<int, int>> adj = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };
	int d = -1;

	if (i -1 > -1 && (a[i-1][j] == 'x' || a[i-1][j] == '@')) {
		d = 0;
	}
	else if (i +1 < n && (a[i+1][j] == 'x' || a[i+1][j] == '@')) {
		d = 1;
	}
	else if (j + 1 < n && (a[i][j+1] == 'x' || a[i][j+1] == '@')) {
		d = 2;
	}
	else if (j - 1 > -1 && (a[i][j-1] == 'x' || a[i][j-1] == '@')) {
		d = 3;
	}
	
//	cout << i << " " << j << " : " << d << " = ";

	if (d != -1) {
		bool r = 0;
		while (i < n && i > -1 && j < n && j > -1 &&(a[i][j] == '@' || a[i][j] == 'x')) {
			if (a[i][j] == 'x') {
				r = 1;
			}
			a[i][j] = '1';
			i += adj[d].first;
			j += adj[d].second;
		}
	//	cout << r << endl;
		return r;
	}
	else {
		if (a[i][j] == 'x') {
			a[i][j] = '1';
	//		cout << 1 << endl;
			return 1;
		}
		else {
			a[i][j] = '0';
	//		cout << 0 << endl;
			return 0;
		}
	}
}

void solve() {
	cin >> n;
	a = V<V<char>>(n, V<char>(n));
	for (auto& i : a) {
		for (char& j : i) {
			cin >> j;
		}
	}

	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == '@' || a[i][j] == 'x') {
				c += check(i, j);
			}
		}
	}
	cout << c << endl;
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
