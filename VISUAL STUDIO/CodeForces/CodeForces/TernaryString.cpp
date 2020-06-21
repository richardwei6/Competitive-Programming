
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
	string s;
	cin >> s;
	V<pair<pair<int,int>, char>> a; // [x, y] inclusive
	char c = s[0];
	int l = 0;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] != c) {
			a.PS({ {l, i - 1}, c });
			l = i;
			c = s[i];
		}
	}
	a.PS({ {l, s.size()-1}, c });
	int mn = INT_MAX;
	for (int i = 2; i < a.size(); i++) { // sliding window
		int t[3]{};
		for (int j = 0; j < 3; j++)
			t[a[i - j].second - '1'] = 1;
		if (t[0] && t[1] && t[2] && a[i-2].first.second + 1 == a[i-1].first.first && a[i-1].first.second + 1 == a[i].first.first) {
			mn = min(mn, a[i].first.first - a[i - 2].first.second + 1);
		}
	}
	cout << (mn == INT_MAX ? 0 : mn) << endl;
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
