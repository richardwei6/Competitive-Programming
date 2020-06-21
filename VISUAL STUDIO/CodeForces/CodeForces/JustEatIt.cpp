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
	V<ll> a(n);
	ll t = 0, mx = 0;
	for (ll& i : a) {
		cin >> i;
		t += i;
		mx = max(mx, i);
	}
	V<ll> dp(n);
	dp[0] = 0;
	for (int i = 1; i < n; i++) { // kadane's alg
		dp[i] = max(dp[i - 1], 1ll*0) + a[i];
		mx = max(mx, dp[i]);
	}
	dp[0] = a[0];
	for (int i = 1; i + 1 < n; i++) { // kadane's alg
		dp[i] = max(dp[i - 1], 1ll * 0) + a[i];
		mx = max(mx, dp[i]);
	}
	cout << (t > mx? "YES":"NO") << endl;
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