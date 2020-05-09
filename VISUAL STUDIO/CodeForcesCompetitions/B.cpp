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
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) emplace_back(x)

void solve() {
	int n, k;
	cin >> n >> k;
	if (n % k == 0) { 
		cout << "YES" << endl;
		int t = k;
		for (; t--;) {
			cout << n / k;
			if (t > 0) {
				cout << " ";
			}
		}
		cout << endl;
	}
	else {
		for (int i = 1; i<=n; i++) {
		//	cout << i << endl;
			if (i % 2 == (n - (i * (k - 1))) % 2 && (n-(i*(k-1)))> 0) {
				cout << "YES" << endl; 
				cout << n - (i * (k - 1)) << " ";
				for (int j = k - 1; j--;) {
					cout << i << " ";
				}
				cout << endl;
				return;
			}
		}
		cout << "NO" << endl;
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
