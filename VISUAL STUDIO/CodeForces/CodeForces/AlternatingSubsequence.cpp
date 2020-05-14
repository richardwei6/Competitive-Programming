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

ll dp[200001]{}; // alg - max of each subsection (each subsection has the same sign)

void solve() {
	int n;
	cin >> n;
	V<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll prevS = a[0] < 0, prev = a[0];
	dp[0] = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < 0 == prevS) { // same sign
			dp[i] = dp[i - 1];
			if (a[i] + (dp[i] - prev) > dp[i]) {
				dp[i] = a[i] + (dp[i] - prev);
				prev = a[i];
			}
		}
		else { // diff sign
	//		cout << "diff sign - " << a[i] <<  " = " << dp[i-1]+a[i] << endl;
			dp[i] = dp[i - 1] + a[i];
			prev = a[i];
			prevS = a[i] < 0;
		}
	}
	cout << dp[n - 1] << endl;
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
