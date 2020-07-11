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
	pair<int, int> s;
	cin >> n >> s.first >> s.second;
	V<pair<int, int>> a(n);

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		a[i].first = x;
		a[i].second = y;
	}

	map<char, int> m;

	for (int i = 0; i < n; i++) {
		if (a[i].first > s.first) {
			m['R']++;
		}
		else if (a[i].first < s.first){
			m['L']++;
		}
		if (a[i].second > s.second) {
			m['U']++;
		}
		else if (a[i].second < s.second){
			m['D']++;
		}
	}


	int mx = 0;
	pair<int, int> ans;
	if (s.first + 1 >= 0 && s.second >= 0 && mx < m['R']) {
		ans = { s.first + 1, s.second }, mx = m['R'];
	}
	if (s.first - 1 >= 0 && s.second >= 0 && mx < m['L']) {
		ans = { s.first - 1, s.second }, mx = m['L'];
	}

	if (s.first >= 0 && s.second + 1 >= 0 && mx < m['U']) {
		ans = { s.first, s.second + 1 }, mx = m['U'];
	}

	if (s.first >= 0 && s.second - 1 >= 0 && mx < m['D']) {
		ans = { s.first, s.second - 1 }, mx = m['D'];
	}

	cout << mx << endl;
	if (mx) {
		cout << ans.first << " " << ans.second << endl;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//int t; cin >> t;
	//while (t--)
		solve();
	return 0;
}


/**/
