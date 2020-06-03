
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

V<V<char>> a;
int n, k;

bool addW(int i, int j) {
	if (i + 1 < n) {
		if (a[i + 1][j] == 'W') {
			return 0;
		}
		if (a[i + 1][j] == '.') {
			a[i + 1][j] = 'D';
		}
	}
	if (i - 1 > -1) {
		if (a[i - 1][j] == 'W') {
			return 0;
		}
		if (a[i - 1][j] == '.') {
			a[i - 1][j] = 'D';
		}
	}
	if (j + 1 < k) {
		if (a[i][j+1] == 'W') {
			return 0;
		}
		if (a[i][j+1] == '.') {
			a[i][j+1] = 'D';
		}
	}
	if (j - 1 > -1) {
		if (a[i][j-1] == 'W') {
			return 0;
		}
		if (a[i][j-1] == '.') {
			a[i][j-1] = 'D';
		}
	}
	return 1;
}

void solve() {
	cin >> n >> k;
	a = V<V<char>>(n, V<char>(k));
	for (auto& i : a) {
		for (char& j : i) {
			cin >> j;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			if (a[i][j] == 'S' && addW(i, j) == 0) {
				cout << "No" << endl;
				return;
			}
		}
	}
	cout << "Yes" << endl;
	for (auto i : a) {
		for (char j : i) {
			cout << j;
		}
		cout << endl;
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
