
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
	ll n;
	cin >> n;
	V<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll dp[100001]{};
	dp[0] = 1;
	ll mx = 1;
	for (ll i = 1; i < n; i++) {
		if (a[i - 1] < a[i]) {
			dp[i] = dp[i - 1] + 1;
		}
		else {
			dp[i] = 1;
		}
		mx = max(mx, dp[i]);
	}
	cout << mx << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//int t; cin >> t;
//while (t--)
		solve();
	return 0;
}


/**/
