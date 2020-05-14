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

void solve() {
	ll n, k, b;
	V<pp> a;
	cin >> n >> k;
	for (ll i = 1; i <= n; i++) {
		cin >> b;
		a.push_back({ b,i });
	}
	sort(begin(a), end(a));
	V<ll> p;
	for (int i = 0; i < n; i++) {
		if (k < a[i].first) {
			break;
		}
		k -= a[i].first;
		p.push_back(a[i].second);
	}
	cout << p.size() << endl;
	for (ll i : p) {
		cout << i << " ";
	}
	cout << endl;
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
