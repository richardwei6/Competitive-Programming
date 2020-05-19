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
#define IT(x) begin(x),end(x)
#define mod 1000000007
 
 
ll sum[100001]{};
 
void solve() {
	int n, k;
	cin >> n >> k;
	V<pp> t(n);
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		mx = max3(mx, x, y);
		t[i] = { x,y };
	}
	
	int dp[100001]{};
	dp[0] = 1;
	for (int i = 1; i <= mx; i++) {
		dp[i] = (dp[i - 1]%mod + (i - k > -1 ?dp[i - k]%mod : 0))%mod;
	}
	sum[0] = dp[0];
	for (int i = 1; i <= mx; i++) {
		sum[i] = (sum[i - 1]%mod + dp[i])%mod;
	}
	for (auto i : t) {
		ll t = (sum[i.second] - sum[i.first - 1])%mod;
		cout << (t < 0? t+=mod : t) << endl;
	}
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t, k; cin >> t >> k;
//	while (t--)
		solve();
	return 0;
}
 
 
/**/