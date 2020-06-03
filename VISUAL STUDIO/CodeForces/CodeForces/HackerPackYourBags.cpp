
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

void D(V<ll> a) {
	for (ll i : a)
		cout << i << " ";
	cout << endl;
}

V<V<ll>> a;
ll n;

pair<V<V<ll>>::iterator, V<V<ll>>::iterator> binary(ll x) {// returns pos of element - x is the duration needed
	return equal_range(IT(a), V<ll>{ 0, 0, 0, x }, [](V<ll> a, V<ll> b){
		return a[3] < b[3];
	});
}




void solve() {
	ll x;
	cin >> n >> x;
	a = V<V<ll>>(n);
	for (V<ll>& i : a) {
		ll a, b, c;
		cin >> a >> b >> c;
		i = { a, b, c, b - a + 1 }; // l, r, cost, duration
	}
	sort(IT(a), [](V<ll> a, V<ll> b) {
		return a[3] < b[3];
	});

	ll mnC = -1;
	for (ll i = 0; i < n; i++) {
		//cout << i << " - " << a[i][3] << endl;
		//cout << "find duration - " << x - a[i][3] << endl;
		auto pIt = binary(x - a[i][3]); // finds the needed duration
		V<ll> mnD = { -1, -1, -1, -1 }; 
		while (pIt.first != pIt.second) { // find smallest duration - if equal, none was found
			V<ll> t = *pIt.first;
			if ((mnD[3] == -1 || mnD[2] > t[2]) && (t[1] < a[i][0] || a[i][1] < t[0])) {
				mnD = t;
			}
			pIt.first++;
		}
		if (mnD[3] != -1) { 
			mnC = (mnC == -1 ? a[i][2] + mnD[2] : min(mnC, a[i][2] + mnD[2]));
		}
		//cout << endl;
	}
	cout << (mnC == -1 ? -1 : mnC) << endl;
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
