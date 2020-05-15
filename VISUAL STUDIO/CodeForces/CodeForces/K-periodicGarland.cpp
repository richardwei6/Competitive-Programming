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


// failing test case - 
// 1
//4 1
//1001
// ans is 1??? but output is 2

void solve() {
	int n, k;
	cin >> n >> k;
	V<V<int>> dp(k, V<int>(n+1, 0));
	string t;
	cin >> t;
	int u = -1, l = -1;
	for (int i = 0; i < n; i++) {
		if (t[i] == '1') {
			if (l == -1) {
				l = i;
				u = i;
			}
			else if (i > u) {
				u = i;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		char s = t[i - 1];
		//	cout << s << endl;
		for (int j = 0; j < k; j++) {
			dp[j][i] = dp[j][i - 1] + (i-1 <= u && i-1 >= l?(i % k == j ? (s == '1' ? 0 : 1) : (s == '0' ? 0 : 1)):0);
		}
	}
	for (int i = 0; i < k; i++) {
		for (int j = 1; j <= n; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	int mn = INT_MAX;
	for (int i = 0; i < k; i++) {
		mn = min(mn, dp[i][n]);
	}
	cout << mn << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		solve();		
	}
	return 0;
}


/**/
