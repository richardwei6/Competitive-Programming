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

int n;
V<int> a;
V<V<int>> dp;

int rec(int i, int k, int z) {
	if (k == 0) {
		dp[i][z] = a[i];
		return a[i];
	}
	if (dp[i][z] != -1) {
		return dp[i][z];
	}
	int mx = 0;
	if (i >= 0) {
		mx = max(mx, rec(i + 1, k - 1, z));
	}
	if (i > 0 && z > 0) {
		mx = max(mx, rec(i - 1, k - 1, z - 1));
	}
	dp[i][z] = mx + a[i];
	return dp[i][z];
}

void solve() {
	int k, z;
	cin >> n >> k >> z;
	a.resize(n);
	dp = V<V<int>>(n, V<int>(6, -1));
	for (int& i : a)
		cin >> i;
	cout << rec(0, k, z) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
