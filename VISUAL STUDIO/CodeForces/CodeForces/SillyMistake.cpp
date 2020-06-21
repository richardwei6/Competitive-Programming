
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

const int mx = (int)1e6 + 5;

int s[mx]{};

void solve() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
		int d = 0, c = 0;
		V<int> ans, r;
		int o = 0;
		for (int i = 0; i < n; i++) {
			int j;
			cin >> j;
			c++;
			if (j > 0) { // add
				if (s[j] == 0) {
					s[j] = 1;
					r.PS(j);
					o++;
				}
				else {
					cout << -1 << endl;
					return;
				}
			}
			else {
				if (s[-j] == 1) {
					s[-j] = 2;
					o--;
				}
				else {
					cout << -1 << endl;
					return;
				}
			}
			if (o == 0) {
				ans.PS(c);
				c = 0;
				d++;
				for (int t : r) {
					s[t] = 0;
				}
				r.clear();
			}
		}
		if (o == 0) {
			cout << d << endl;
			D(ans);
		}
		else {
			cout << -1 << endl;
		}
	}
	else {
		cout << -1 << endl;
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
