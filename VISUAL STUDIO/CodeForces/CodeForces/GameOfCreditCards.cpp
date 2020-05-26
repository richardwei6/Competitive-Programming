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
using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
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

void solve() {
	int n;
	cin >> n;
	multiset<int> b;
	string s, m;
	cin >> s >> m;
	V<int> a(n);
	for (int i = 0; i < n; i++) {
		a[i] = s[i] - '0';
		b.insert(m[i] - '0');
	}
	multiset<int> mns = b, mxs = b;
	int mnF = 0, mxF = 0; // mnF is min flicks m can get - lowerbound, mxF is max flicks m can give out - upperbound
	for (int i : a) { 
		auto x = mns.lower_bound(i), y = mxs.upper_bound(i);
		if (x == end(mns)) {
			mnF++;
		}
		else {
			mns.erase(x);
		}
		if (y != end(mxs)) {
			mxF++;
			mxs.erase(y);
		}
	}
	cout << mnF << endl;
	cout << mxF << endl;
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
