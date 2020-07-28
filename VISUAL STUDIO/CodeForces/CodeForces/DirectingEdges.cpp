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

V<int> o, p;
V<V<int>> g;

deque<int> top;

void topSort(int x) {
	p[x] = 1;
	for (int i : g[x]) {
		if (p[i] == 0) {
			topSort(i);
		}
	}
	top.push_front(x);
}

void solve() {
	int n, m;
	cin >> n >> m;
	p = V<int>(n);
	g = V<V<int>>(n);
	top.clear();
	V<pair<int, int>> e;
	for (int i = 0; i < m; i++) {
		int t, x, y;
		cin >> t >> x >> y;
		x--, y--;
		if (t == 1) {
			g[x].PS(y);
		}
		e.PS({ x,y });
	}
	for (int i = 0; i < n; i++) {
		if (p[i] == 0) {
			topSort(i);
		}
	}
	V<int> t(n);
	for (int i = 0; i < n; i++) {
		t[top[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		for (int j : g[i]) {
			if (t[i] > t[j]) {
				NO;
				return;
			}
		}
	}
	YES;
	for (auto i : e) {
		if (t[i.first] < t[i.second]) {
			cout << i.first + 1 << " " << i.second + 1 << endl;
		}
		else {
			cout << i.second + 1 << " " << i.first + 1 << endl;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
