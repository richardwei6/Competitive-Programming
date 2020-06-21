
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


string toBinary(ll n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

void solve() { // add or remove zeros to the end of x to get to y
	ll a, b;
	cin >> a >> b;
	string x = toBinary(a), y = toBinary(b);
//	cout << x << endl;
//	cout << y << endl;
	for (int i = 0; i < min(x.size(), y.size()); i++) {
		if (x[i] != y[i]) {
			cout << -1 << endl;
			return;
		}
	}
	for (int i = min(x.size(), y.size()); i < max(x.size(), y.size()); i++) {
		if (x.size() < y.size()) {
			if (y[i] == '1') {
				cout << -1 << endl;
				return;
			}
		}
		else {
			if (x[i] == '1') {
				cout << -1 << endl;
				return;
			}
		}
	}
	int m = max(x.size(), y.size()) - min(x.size(), y.size());
	if (m > 3) {
		cout << m / 3 + (m % 3 == 0 ? 0 : 1) << endl;
	}
	else {
		if (m == 0) {
			cout << 0 << endl;
		}
		else {
			cout << 1 << endl;
		}
	}
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
