
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
	int n;
	cin >> n;
	V<V<int>> dp(3, vector<int>(n+1, 0));
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		dp[0][i] = min3(dp[0][i - 1], dp[1][i - 1], dp[2][i - 1]) + 1;
		dp[1][i] = (a == 0 || a == 1) ? INT_MAX : min(dp[0][i - 1], dp[2][i - 1]);
		dp[2][i] = (a == 0 || a == 2) ? INT_MAX : min(dp[0][i - 1], dp[1][i - 1]);
	}
	cout << min3(dp[0][n], dp[1][n], dp[2][n]) << endl;
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
