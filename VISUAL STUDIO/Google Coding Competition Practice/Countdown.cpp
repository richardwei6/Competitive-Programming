
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
#define IT(x) begin(x),end(x)
#define mod 1000000007

void solve() {
	int n, k;
	cin >> n >> k;
	V<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int c = 0;
	for (int i = 0; i+k-1 < n; i++) {
		if (a[i] == k) { // start countdown
		//	cout << "at " << i << endl;
			bool t = 1;
			int x = i;
			for (int j = k; j >= 1; j--) {
				if (a[x] != j) {
					t = 0;
					break;
				}
				x++;
			}
			c += t;
			if (t) {
				i = x-1;
			}
		}
	}
	cout << c << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}


/**/
