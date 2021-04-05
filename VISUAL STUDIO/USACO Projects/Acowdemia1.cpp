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
#define dq deque
#define pp pair<ll,ll>
#define pi 4*atan(1)
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << end
#define PS push_back
#define IT(x) begin(x),end(x)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define BOOLO(x) cout << (x ? "YES" : "NO") << endl
const int mod = 1e9 + 7;

template <class T>
void D(T a) {
	for (auto i : a)
		cout << i << " ";
	cout << endl;
}
	
int hindex(V<int> a) {
	sort(IT(a), greater<int>());

	int c = 0;

	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= c + 1) {
			c++;
		}
	}

	return c;
}

void solve() {
	int n, l;
	cin >> n >> l;
	V<int> a(n);
	for (int& i : a) {
		cin >> i;
	}
	
	V<pair<int, int>> t; // val, index
	for (int i = 0; i < n; i++) {
		t.PS({a[i], i});
	}

	int oh = hindex(a);

	sort(IT(t), [&] (pair<int,int> x, pair<int,int> y){
		return abs(x.first - oh) < abs(y.first - oh);
		});

	for (int i = 0; i < t.size() && l > 0; i++, l--) {
		a[t[i].second]++;
	}

	cout << hindex(a) << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout << fixed << setprecision(0);
//	int t; cin >> t; while (t--)
		solve();
	return 0;
}


/**/
