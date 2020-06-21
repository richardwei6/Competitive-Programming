

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
	V<pair<int,int>> a(n);
	int x = 0, y = 0;
	for (auto& i : a) {
		cin >> i.first;
	}
	for (auto& i : a) {
		cin >> i.second;
		if (i.second == 1) {
			x++;
		}
		else {
			y++;
		}
	}
	int f = 1;
	for (int i = 1; i < n; i++) {
		if (a[i].first < a[i - 1].first) {
			f = 0;
			break;
		}
	}
	cout << ((x > 0 && y > 0) || f? "Yes" : "No") << endl;
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
