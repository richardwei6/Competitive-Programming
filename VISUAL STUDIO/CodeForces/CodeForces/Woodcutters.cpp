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


void solve() {
	ll n;
	cin >> n;
	V<int> x(n), h(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> h[i];
	}
	int l = x[0], a = 2; // ans is two as the ending trees can always fall
	for (int i = 1; i < n - 1; i++) { // excluing the outer trees
		if (l < (x[i] - h[i])) {
			a++;
			l = x[i];
		}
		else if (x[i] + h[i] < x[i + 1]) { // falling to right
			a++;
			l = x[i] + h[i];
		}
		else{
			l = x[i];
		}
	}
	cout <<( n!= 1 ? a : 1) << endl;
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
