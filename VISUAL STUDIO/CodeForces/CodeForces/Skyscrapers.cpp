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
#define dq deque
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

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}


void solve() {
	ll n;
	cin >> n;
	V<ll> a(n);
	for (ll& i : a) {
		cin >> i;
	}
	ll mx = 0;
	V<ll> mxS;
	for (ll i = 0; i < n; i++) { // apex
		ll c = a[i];
		V<ll> t = a;
		t[i] = a[i];
		for (ll j = i - 1; j > -1; j--) {
			t[j] = min(a[j], t[j + 1]);
			c += t[j];
		}
		for (ll j = i + 1; j < n; j++) {
			t[j] = min(a[j], t[j - 1]);
			c += t[j];
		}
	//	cout << i << " = ";
	//	D(t);
		if (c > mx) {
	//		cout << "new apex - " << i << endl;
			mxS = t;
			mx = c;
		}
	}
	D(mxS);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
