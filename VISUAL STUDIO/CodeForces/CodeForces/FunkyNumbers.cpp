
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

ll triangle(ll n) {
	return n * (n + 1) / 2;
}

V<ll> a;

bool binary(ll n) {
	int l = 0, r = a.size() - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == n) {
			return 1;
		}
		else if (a[m] < n) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return 0;
}



void solve() {
	ll n;
	cin >> n;
	for (ll i = 1; triangle(i) <= 1e9; i++) {
		a.PS(triangle(i));
	}
	sort(IT(a));

	for (ll i : a) {
		if (binary(n - i)) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
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
