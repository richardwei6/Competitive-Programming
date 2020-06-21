
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
	int a[26]{}, c[5] = {26, 5, 18, 15, 14};
	for (int i = 0; i < n; i++) {
		char t;
		cin >> t;
		a[t - 'a']++;
	}
	V<int> ans;
	while (a[c[3] - 1] > 0 && a[c[4] - 1] > 0 && a[c[1] - 1] > 0) {
		a[c[3] - 1]--;
		a[c[4] - 1]--;
		a[c[1] - 1]--;
		ans.PS(1);
	}
	int mn = INT_MAX;
	for (int i = 0; i < 4; i++) {
		mn = min(mn, a[c[i]-1]);
	}
	for (int i = 0; i < mn; i++) {
		ans.PS(0);
	}
	D(ans);
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
