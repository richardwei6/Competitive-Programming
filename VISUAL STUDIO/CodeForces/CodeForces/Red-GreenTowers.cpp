
/**
// needs more explanations
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
const ll MOD = 1e9 + 7;
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) push_back(x)


void solve() {
	int r, g, h = 0;
	cin >> r >> g;
	while (h * (h + 1) / 2 <= r + g) { // find max height of all blocks
		h++;
	}
	h--;
	vector<ll> dp(r + 5);
	dp[0] = 1;
	for (ll i = 1; i <= h; i++) { // each height
		for (ll j = r; j >= i; j--) { // each red blocks?
			dp[j] = (dp[j] + dp[j - i]) % MOD; // 
		}
	}
	ll a = 0;
	for (ll i = max(0, h * (h + 1) / 2 - g); i <= r; i++) { // only adds certain things?
		//cout << i << endl;
		a = (a + dp[i]) % MOD;
	}
	cout << a << endl;
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
