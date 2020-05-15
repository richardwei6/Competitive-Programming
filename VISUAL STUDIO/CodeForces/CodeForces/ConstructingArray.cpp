
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

struct cmp {
	bool operator() (const pair<int, int>& a, const pair<int, int>& b) const {
		int la = a.second - a.first, lb = b.second - b.first;
		if (la == lb) { // prioritize pos
			return a.first < b.first;
		}
		else {
			return la > lb;
		}
	}
};

void solve() {
	int n;
	cin >> n;
	V<int> a(n, 0);
	set<pair<int, int>, cmp> seg; // segments
	seg.insert({ 0,n - 1 }); // inital segment
	for (int i = 1; i <= n; i++) {
		pair<int, int> b = *begin(seg);
		int half = (b.second + b.first) / 2;
		a[half] = i;
		seg.erase(begin(seg));
		if (half - b.first > 0) {
			seg.insert({ b.first, half - 1 });
		}
		if (b.second - half > 0) {
			seg.insert({ half+1, b.second });
		}
	}
	for (int i : a) {
		cout << i << " ";
	}
	cout << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/
