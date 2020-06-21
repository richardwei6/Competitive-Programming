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
	cin >> n;
	V<int> a(n);
	set<int> all, st;
	for (int& i : a) {
		cin >> i;
		all.insert(i);
	}
	if (n == 1) {
		cout << -1 << endl;
		return;
	}
	sort(IT(a));
	if (n == 2) {
		if (a[0] == a[1]) {
			cout << 1 << endl;
			cout << a[0] << endl;
		}
		else if ((a[1] - a[0] - 1) & 1) {
			cout << 3 << endl;
			cout << a[0] - (a[1] - a[0]) << " " << (a[0] + a[1]) / 2 << " " << a[1] + (a[1] - a[0]) << endl;
		}
		else {
			cout << 2 << endl;
			cout << a[0] - (a[1] - a[0]) << " " << a[1] + (a[1] - a[0]) << endl;
		}
		return;
	}
	for (int i = 1; i < n; i++) {
		st.insert(a[i] - a[i - 1]);
	}

	if (st.size() == 1) {
		if (all.size() == 1) {
			cout << 1 << endl;
			cout << a[0] << endl;
		}
		else {
			cout << 2 << endl;
			cout << a[0] - *st.begin() << " " << a[n - 1] + *st.begin() << endl;
		}
	}
	else if (st.size() == 2) {
		int mn = *st.begin();
		int mx = *(++st.begin());

		if (mn * 2 == mx) {
			int t = 0, id = 0;
			for (int i = 1; i < n; i++) {
				if (a[i] - a[i - 1] == mx) {
					t++, id = i;
				}
			}
			if (t == 1) {
				cout << 1 << endl;
				cout << (a[id] + a[id - 1]) / 2 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
		else {
			cout << 0 << endl;
		}
	}
	else {
		cout << 0 << endl;
	}


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
