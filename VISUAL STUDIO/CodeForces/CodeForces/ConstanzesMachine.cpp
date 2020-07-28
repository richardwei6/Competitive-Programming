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
	string s;
	cin >> s;
	V<ll> dp(s.size()+1, 0);
	dp[0] = dp[1] = 1;
	if (s[0] == 'm' || s[0] == 'w') {
		cout << 0 << endl;
		return;
	}
	for (int i = 2; i <= s.size(); i++) {
		if (s[i - 1] == 'm' || s[i - 1] == 'w') {
			cout << 0 << endl;
			return;
		}
		dp[i] = dp[i - 1];
		if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n')) {
			dp[i] = (dp[i] + dp[i - 2]) % mod;
		}
	}
	cout << dp[s.size()] << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
