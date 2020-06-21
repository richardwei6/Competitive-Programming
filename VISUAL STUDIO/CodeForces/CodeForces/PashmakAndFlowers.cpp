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

unsigned ll nChoosek( unsigned ll n, unsigned ll k ){
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    unsigned ll result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

void solve() {
	ll n;
	cin >> n;
	ll mx = 0, mn = INT_MAX, mxN = 0, mnN = 0;
	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		if (j > mx) {
			mxN = 1;
			mx = j;
		}
		else if (j == mx) {
			mxN++;
		}
		if (j < mn) {
			mnN = 1;
			mn = j;
		}
		else if (j == mn) {
			mnN++;
		}
	}
	if (mx == mn) {
		cout << 0 << " " << nChoosek(mxN, 2) << endl;
	}
	else {
		cout << mx - mn << " " << mxN * mnN << endl;
	}
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
