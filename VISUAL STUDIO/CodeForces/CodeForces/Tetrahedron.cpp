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

ll bigPow(ll x, ll n, ll M) {
	if (n < 0) {
		return bigPow(1 / x, -n, M)%M;
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x)%M, n / 2, M)%M;
	}
	else if (n % 2 != 0) {
		return (x * bigPow((x * x)%M, (n - 1) / 2, M))%M;
	}
}


ll resid(ll n) {
	return (0.15 * ((bigPow(5, n, mod) + mod) % mod)) + 2.25;
}

void solve() {
	ll n;
	cin >> n;
	int a = 1, b = 0;
	for (ll i = 1; i <= n; i++) {
		int x = (b * 3LL) % mod;
		int y = (b * 2LL + a) % mod;
		a = x;
		b = y;
	}
	cout << a << endl;
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
