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
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


void solve() {
	ll n;
	cin >> n;
	ll a = 0, b = 0;
	for (ll i = 0; i < n; i++) {
		ll j;
		cin >> j;
		if (j == 25) {
			a++;
		}
		else {
			if (j == 50) {
				b++;
				if (a > 0) {
					a--;
				}
				else {
					NO;
					return;
				}
			}
			else {
				if (a > 0 && b > 0) {
					a--;
					b--;
				}
				else if (a >= 3) {
					a -= 3;
				}
				else {
					NO;
					return;
				}
			}
		}
	}
	YES;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	ll t; cin >> t;
//	while (t--)
		solve();
	return 0;
}


/**/
