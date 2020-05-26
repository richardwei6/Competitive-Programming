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
#define PS push_back
#define IT(x) begin(x),end(x)
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


ll bigPow(ll x, ll n) {
	if (n < 0) {
		return bigPow(1 / x, -n);
	}
	else if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return bigPow((x * x), n / 2);
	}
	else if (n % 2 != 0) {
		return x * (bigPow((x * x), (n - 1) / 2));
	}
}


ll binaryToDec(string s) {
	ll o = 0;
	for (int i = s.size() - 1, p = 0; i > -1; i--, p++) {
		if (s[i] == '1') {
			o += bigPow(2, p);
		}
	}
	return o;
}

void solve() {
	ll a, b, c = 0;
	cin >> a >> b;
	for (int s = (int)log2(a) + 1; s <= (int)log2(b) + 1; s++) {
		string bin(s, '1');
		for (int i = 1; i < s; i++) {
			string t = bin;
			t[i] = '0';
			ll m = binaryToDec(t);
			if (m >= a && m <= b) {
				c++;
			}
		}
	}
	cout << c << endl;
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
