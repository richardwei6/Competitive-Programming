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

bool ck(V<ll> t, ll n, ll a, ll b, ll c) {
	ll mx = 0, l = 0, r = 0, u = 0;
	V<int> m(n);
	for (ll i = 0; i < n; i++) {
		if (t[i] >= mx) {
			l++;
			m[i] = 1;
		}
		mx = max(mx, t[i]);
	}
	mx = 0;
	for (ll i = n - 1; i > -1; i--) {
		if (t[i] >= mx) {
			r++;
			if (m[i]) {
				u++;
			}
		}
		mx = max(mx, t[i]);
	}
	return a == l && b == r && u == c;
}

void solve() {
	ll n, a, b, c;
	cin >> n >> a >> b >> c;
	ll l = a - c, r = b - c;
	V<ll> ans;
	if (l == 0 && r == 0) {
		for (ll i = 0; i < a - 1; i++) {
			ans.PS(n);
		}
		for (ll i = 0; i < n - a; i++) {
			ans.PS(1);
		}
		ans.PS(n);
	}
	else {
		ll m = n - (l + r + c);
		if (l != 0) {
			for (ll i = 0; i < l; i++) {
				ans.PS(n - 1);
			}
		}
		if (r == 0) {
			for (ll i = 0; i < m; i++) {
				ans.PS(1);
			}
			for (ll i = 0; i < c; i++) {
				ans.PS(n);
			}
		}
		else {
			for (ll i = 0; i < c; i++) {
				ans.PS(n);
			}
			for (ll i = 0; i < m; i++) {
				ans.PS(1);
			}
		}
		if (r != 0) {
			for (ll i = 0; i < r; i++) {
				ans.PS(n - 1);
			}
		}
	}
	if (!ck(ans, n, a, b, c)) {
		cout << "IMPOSSIBLE" << endl;
	}
	else {
		D(ans);
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
