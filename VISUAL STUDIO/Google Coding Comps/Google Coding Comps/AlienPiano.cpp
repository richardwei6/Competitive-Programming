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
#define INT_MAX 2147483647
#define INT_MIN -2147483647
const int mod = 1e9 + 7;

int c(int a, int b) {
	return a == b ? 0 : a < b ? -1 : 1;
}

void solve() {
	int n;
	cin >> n;
	V<ll> a(n);
	for (ll& i : a)
		cin >> i;
	V<V<ll>> dp(n, V<ll>(4, 0));
	for (ll i = 1; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			ll mn = INT_MAX;
			for (int x = 0; x < 4; x++) {
				mn = min(mn, dp[i - 1][x] + (c(j,x) != c(a[i-1], a[i])));
			}
			dp[i][j] = mn;
		}
	}
	cout << min(min(dp[n - 1][0], dp[n - 1][1]), min(dp[n - 1][2], dp[n - 1][3])) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}


/**/
