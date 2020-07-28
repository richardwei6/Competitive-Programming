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

ll bigPow(ll x, ll n, ll M) {
	if (n < 0) {
		return bigPow(1 / x, -n, M)%M;
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x)%M, n / 2, M)%M;
	}
	else if (n % 2 != 0) {
		return (x * bigPow((x * x)%M, (n - 1) / 2, M))%M;
	}
}


void solve() {
	int h, w;
	cin >> h >> w;
	V<V<int>> a(h, V<int>(w));
	for (int i = 0; i < h; i++) {
		int r;
		cin >> r;
		int j = 0;
		for (; j < r; j++) {
			a[i][j] = 1;
		}
		if (j < w) {
			a[i][j] = 2;
		}
	}
	for (int i = 0; i < w; i++) {
		int c;
		cin >> c;
		int j = 0;
		for (; j < c; j++) {
			if (a[j][i] == 2) {
				cout << 0 << endl;
				return;
			}
			a[j][i] = 1;
		}
		if (j < h) {
			if (a[j][i] == 1) {
				cout << 0 << endl;
				return;
			}
			a[j][i] = 2;
		}
	}
	int ans = 0;
	for (auto i : a) {
		for (int j : i) {
			ans += (j == 0);
		}
	}
	cout << bigPow(2, ans, mod) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
