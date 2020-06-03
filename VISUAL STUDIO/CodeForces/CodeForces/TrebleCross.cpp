
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
	for (int& i : a) {
		char t;
		cin >> t;
		i = (t == 'O' ? 0 : 1);
	}
	V<int> p;
	for (int i = 2; i < n; i++) {
		int s = a[i] + a[i - 1] + a[i - 2];
		if (s == 2) {
			if (a[i] == 0) {
				p.PS(i);
			}
			else if (a[i - 1] == 0) {
				p.PS(i-1);
			}
			else {
				p.PS(i-2);
			}
		}
	}
	if (p.size()) {
		for (int i : p) {
			cout << i + 1 << " ";
		}
		cout << endl;
	}
	else {
		cout << -1 << endl;
	}
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
