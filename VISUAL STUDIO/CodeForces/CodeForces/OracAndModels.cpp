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
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) push_back(x)
#define IT(x) begin(x),end(x)
#define mod 1000000007

void solve() {
	int n;
	cin >> n;
	V<int> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	int mx = 0;
	int dp[100002]{};
	for (int i = 1; i <= n; i++) { // max of every dp number divisible by indice 'i' && a[i] > a[i-k] where i%k == 0
		int c = 0;
		for (int j = 1; j <= sqrt(i); j++) { // next lowest divisible number 
			if (i % j == 0) {
				if (s[i - 1] > s[j - 1]) {
					c = max(c, dp[j]);
				}
				if (i / j != j && s[i - 1] > s[(i / j) - 1]) {
					c = max(c, dp[i / j]);
				}
			}
		}
		dp[i] = c+1;
		mx = max(mx, c + 1);
	}
	cout <<  mx << endl;
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
