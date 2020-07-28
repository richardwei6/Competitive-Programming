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


void solve() {
	int n, k, d;
	cin >> n >> k >> d;
	V<V<ll>> dp(n + 1, V<ll>(2));
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (i - j < 0) {
				break;
			}
			if (j < d) {
				dp[i][0] = (dp[i][0] + dp[i - j][0]) % mod;
				dp[i][1] = (dp[i][1] + dp[i - j][1]) % mod;
			}
			else {
				dp[i][1] = ((dp[i][1] + dp[i - j][0])%mod + dp[i - j][1]) % mod;
			}
		}
	}
	cout << dp[n][1] << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
