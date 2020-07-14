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
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

void D(V<int> a) {
	for (int i : a)
		cout << i << " ";
	cout << endl;
}


void solve() {
	int x, f, p, k; // x pos, total units, place where gas station is, k is total # of trips
	cin >> x >> f >> p >> k;
	int c = 0, a = p, b = x - p, t = f; // a is to gas b is from gas
	if (f < a || f < b) {
		cout << -1 << endl;
		return;
	}
	else if (k > 2 && (f < 2 * a || f < 2 * b)) {
		cout << -1 << endl;
		return;
	}
	else if (k == 2 && (f < 2 * b)) {
		cout << -1 << endl;
		return;
	}
	int startP = k % 2;
	while (k) {
		if (startP == k%2) {// 0 to x
			t -= a;
			if (k == 1) {
				if (t - b < 0) {
					t = f;
					c++;
				}
			}
			else if (t - 2 * b < 0) {
				c++;
				t = f;
			}
			t -= b;
		}
		else { // x to 0
			t -= b;
			if (k == 1) {
				if (t - a < 0) {
					t = f;
					c++;
				}
			}
			else if (t - 2 * a < 0) {
				t = f;
				c++;
			}
			t -= a;
		}
		k--;
	}
	cout << c << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
