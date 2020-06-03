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


void solve() {
	int n;
	cin >> n;
	int c[6]{};
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		if (j == 4) {
			c[0]++;
		}
		else if (j == 8 && c[0] > 0) {
			c[1]++;
			c[0]--;
		}
		else if (j == 15 && c[1] > 0) {
			c[1]--;
			c[2]++;
		}
		else if (j == 16 && c[2] > 0) {
			c[2]--;
			c[3]++;
		}
		else if (j == 23 && c[3] > 0) {
			c[3]--;
			c[4]++;
		}
		else if (j == 42 && c[4] > 0) {
			c[4]--;
			c[5]++;
		}
	}
	cout << n - (6 * c[5]) << endl;
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
