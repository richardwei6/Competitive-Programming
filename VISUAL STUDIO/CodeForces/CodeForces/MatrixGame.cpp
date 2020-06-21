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

V<V<int>> a;

int n, m;

bool correct(int i, int j) {
	for (int x = 0; x < m; x++) {
		if (a[i][x] != 0) {
			return 0;
		}
	}
	for (int x = 0; x < n; x++) {
		if (a[x][j] != 0) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	cin >> n >> m;
	a =	V<V<int>>(n, V<int>(m));
	for (auto& i : a) {
		for (int& j : i) {
			cin >> j;
		}
	}
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (correct(i, j)) {
				c++;
				a[i][j] = 1;
			}
		}
	}
	cout << (c % 2 == 0 ? "Vivek" : "Ashish") << endl;
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
