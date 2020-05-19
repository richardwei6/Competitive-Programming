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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector
#define pp pair<ll,ll>
#define pi 3.1416
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) push_back(x)
#define IT(x) begin(x),end(x)
#define mod 1000000007

void solve() {
	int n;
	cin >> n;
	V<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int s = 1;
	V<int> r(n, 1), l(n,1);
	for (int i = n - 2; i >= 0; i--) {
		if (a[i + 1] > a[i]) {
			r[i] = r[i + 1] + 1;
		}
		s = max(s, r[i]);
	}

	for (int i = 1; i < n; i++) {
		if (a[i] > a[i - 1]) {
			l[i] = l[i - 1] + 1;
		}
		s = max(s, l[i]);
	}

	for (int i = 0; i < n-2; i++) {
		if (a[i] < a[i + 2]) {
			s = max(s, l[i] + r[i + 2]);
		}
	}
	cout << s << endl;

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
