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
	deque<int> q;
	V<int> v;
	ll x = 0, y = 0;
	if (n % 2 == 0) {
		for (int i = n; i >= 1; i--) {
			q.PS(i);
		}
	}
	else {
		for (int i = n; i >= 2; i--) {
			q.PS(i);
		}
	}
	int k = 1;
	while (q.size()) {
		if (k % 2) {
			if (q.size()) {
				v.PS(q.front());
				x += q.front();
				q.pop_front();
			}
			if (q.size()) {
				y += q.front();
				q.pop_front();
			}
		}
		else {
			if (q.size()) {
				v.PS(q.back());
				x += q.back();
				q.pop_back();
			}
			if (q.size()) {
				y += q.back();
				q.pop_back();
			}
		}
		k++;
	}

	if (n % 2 == 1) {
		if (x < y) {
			v.PS(1); x++;
		}
		else {
			y++;
		}
	}
	cout << abs(x - y) << endl;
	cout << v.size() << endl;
	D(v);
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
