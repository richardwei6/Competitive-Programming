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

void solve() {
	ll n;
	cin >> n;
	vector<int> a, b;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		a.push_back(j);
	}
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		b.push_back(j);
	}
	set<int> p; // alg use passed numbers before to see if you can make the number needed
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			if (a[i] < b[i]) {
				if (p.count(1)==0) {
					cout << "NO" << endl;
					return;
				}
			}
			else { // a[i] > b[i]
				if (p.count(-1) == 0) {
					cout << "NO" << endl;
					return;
				}
			}
		}
		p.insert(a[i]);
	}
	cout << "YES" << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}


/**/