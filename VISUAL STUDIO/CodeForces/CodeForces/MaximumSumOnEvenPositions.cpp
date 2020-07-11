
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
	V<int> a(n);
	V<V<ll>> dp(n+1, V<ll>(3));
	for (int& i : a)
		cin >> i;
	for (int i = 0; i < n; i++) {
		dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + (i % 2 == 0 ? a[i] : 0));
		if (i + 2 <= n) {
			dp[i + 2][1] = max(dp[i + 2][1], max(dp[i][0], dp[i][1]) + (i % 2 == 0 ? a[i + 1] : a[i]));
		}
		dp[i + 1][2] = max(dp[i + 1][2], max3(dp[i][0], dp[i][1], dp[i][2]) + (i % 2 == 0 ? a[i] : 0));
	}
	cout << max3(dp[n][0], dp[n][1], dp[n][2]) << endl;
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
