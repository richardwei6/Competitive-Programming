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
#define dq deque
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
#define INT_MAX 2147483647
#define INT_MIN -2147483647

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}

V<int> ans;
int f = 0, n, a, b, u;

void rec(V<int> c) {
	if (c.size() == n) {
		int l = 0, r = 0, u1 = 0;
		V<int> m(n);
		int mx = 0;
		for (int i = 0; i < n; i++) {
			if (c[i] >= mx) {
				l++;
				m[i] = 1;
			}
			mx = max(mx, c[i]);
		}
		mx = 0;
		for (int i = n - 1; i > -1; i--) {
			if (c[i] >= mx) {
				r++;
				if (m[i] == 1) {
					u1++;
				}
			}
			mx = max(mx, c[i]);
		}
		if (a == l && b == r && u1 == u) {
			f = 1;
			ans = c;
		}
	}
	else {
		c.PS(0);
		for (int i = 1; i <= n && f == 0; i++) {
			c[c.size() - 1] = i;
			rec(c);
		}
	}
}

void solve() {
	f = 0;
	cin >> n >> a >> b >> u;
	rec({});
	if (f) {
		D(ans);
	}
	else {
		cout << "IMPOSSIBLE" << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}


/**/
