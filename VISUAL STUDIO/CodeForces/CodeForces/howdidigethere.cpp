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
#include <sstream>
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
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;


ll bigPow(ll x, ll n) {
	if (n < 0) {
		return bigPow(1 / x, -n)%mod;
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x) % mod, n / 2) % mod;
	}
	else if (n % 2 != 0) {
		return x * (bigPow((x * x) % mod, (n - 1) / 2) % mod ) % mod;
	}
}

ll fact(ll n) {
	ll f = 1;
	for (ll i = 1; i <= n; i += 1) {
		f = (f * i)%mod;
	}
	return f%mod;
}

void solve(){
	int n;
	cin >> n;
	int a[1000]{}, s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}
	ll ans = fact(s);
	for (int i = 0; i < n; i++) {
		if (a[i] > 1) {
			ans = (ans * bigPow(fact(a[i]), mod-2)) % mod;
		}
	}
	cout << ans << endl;

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
