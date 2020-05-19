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
#define mod 1000000007

void solve() {
	string a, b, c, o, t; // t is not used, a (o) b = c
	cin >> a >> o >> b >> t >> c;
	int f = a.find('?'), s = b.find('?');
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			string x = a, y = b;
			x[f] = i + '0', y[s] = j + '0';
			long double d = stoll(x), f = stoll(y), e = 0;
			if (o == "*") {
				e = d * f;
			}
			else {
				e = d / f;
			}
			if (e == stoll(c)) {
				cout << i << " " << j << endl;
				return;
			}
		}
	}
	cout << "-1 -1" << endl;
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
