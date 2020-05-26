
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
const ll mod = 1e9 + 7;


void solve() {
	ll n, m, c = 1, s = 0;
	cin >> n >> m;
	while (m--) {
		int j;
		cin >> j;
		if (j >= c) {
			s += j - c;
		}
		else {
			s += n - c + j;
		}
		c = j;
	}
	cout << s << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//nt t; cin >> t;
//hile (t--)
		solve();
	return 0;
}


/**/
