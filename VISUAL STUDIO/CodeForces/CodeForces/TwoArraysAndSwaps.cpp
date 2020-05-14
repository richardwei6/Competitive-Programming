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
#define fullIT(x) begin(x), end(x)

void display(multiset<int> x, multiset<int> y) {
	cout << "x - ";
	for (int i : x) {
		cout << i << " ";
	}
	cout << endl;
	cout << "y - ";
	for (int i : y) {
		cout << i << " ";
	}
	cout << endl;
}


void solve() {
	int n, k;
	cin >> n >> k;
	multiset<int> x, y;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		x.insert(j);
	}
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		y.insert(j);
	}
	while (k && (*begin(x) < *--end(y) ) ) {
		int a = *begin(x);
		int b = *--end(y);
		x.erase(begin(x));
		y.erase(--end(y));
		x.insert(b);
		y.insert(a);
		k--;
	}
	cout << accumulate(begin(x), end(x), 0) << endl;
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
