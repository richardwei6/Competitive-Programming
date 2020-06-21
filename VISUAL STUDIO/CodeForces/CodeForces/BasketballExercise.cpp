
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
	int n;
	cin >> n;
	V<V<ll>> a(2, V<ll>(n));
	for (ll& i : a[0])
		cin >> i;
	for (ll& i : a[1])
		cin >> i;
	V<V<ll>> dp(2, V<ll>(n));
	dp[0][n - 1] = a[0][n - 1];
	dp[1][n - 1] = a[1][n - 1];
	ll mxa = a[0][n - 1], mxb = a[1][n - 1]; // a is 0 b is 1
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				dp[j][n - i] = mxb + a[j][n - i];
			}
			else {
				dp[j][n - i] = mxa + a[j][n - i];
			} 
		}
		mxa = max(mxa, dp[0][n - i]);
		mxb = max(mxb, dp[1][n - i]);
	}
	cout << max(dp[0][0], dp[1][0]) << endl;
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
