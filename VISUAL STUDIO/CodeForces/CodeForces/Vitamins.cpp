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
//#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

void D(V<string> a) {
	for (string i : a)
		cout << i << " ";
	cout << endl;
}

bool containsAll(V<string> t) {
	int a[26]{};
	for (string i : t) {
		for (char j : i) {
			a[j - 'A'] = 1;
		}
	}
	return a[0] > 0 && a[1] > 0 && a[2] > 0;
}

int min2(int a, int b) {
	if (a == -1 || b < a) {
		a = b;
	}
	return a;
}

void solve() {
	int n, mn = -1;
	cin >> n;
	int a[3]{};
	a[0] = a[1] = a[2] = mn;
	V<pair<int,string>> t;
	for (int i = 0; i < n; i++) {
		int x;
		string s;
		cin >> x >> s;
		if (s.size() == 3) {
			mn = min2(mn, x);
		}
		else if (s.size() == 1) {
			a[s[0] - 'A'] = min2(a[s[0] - 'A'], x);
		}
		else {
			t.PS({ x, s });
		}
	}
	if (a[0] != -1 && a[1] != -1 && a[2] != -1) {
		mn = min2(mn, a[0] + a[1] + a[2]);
	}
	for (int i = 0; i+1 < t.size(); i++) {
		for (int j = i + 1; j < t.size(); j++) {
			if (containsAll({t[i].second, t[j].second})) {
				mn = min2(mn, t[i].first + t[j].first);
			}
		}
	}
	for (int i = 0; i < t.size(); i++) {
		int c[3]{};
		for (char j : t[i].second) {
			c[j - 'A'] = 1;
		}
		for (int j = 0; j < 3; j++) {
			if (c[j] == 0 && a[j] != -1) {
				mn = min2(mn, t[i].first + a[j]);
			}
		}
	}
	cout << mn << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
