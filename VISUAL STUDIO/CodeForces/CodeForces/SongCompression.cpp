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
#define PS(x) emplace_back(x)




void solve() {
	ll n, m, currS = 0;
	cin >> n >> m;
	map<ll, ll> a; // i - after size
	vector<pair<ll, ll>> s; // current sizes
	for (ll i = 0; i < n; i++) { // i is song pos
		ll x, y;
		cin >> x >> y;
		s.push_back({ i,x });
		a[i] = y;
		currS += x;
	}

	sort(begin(s), end(s), [&a]
	(const pair<ll, ll> x, const pair<ll, ll> y) {
		return (x.second-a[x.first]) > (y.second-a[y.first]);
	}
	);

	ll c = 0;
	for (; currS > m; c++) {
		if (c == s.size()) {
			cout << -1 << endl;
			return;
		}
		currS -= s[c].second;
		s[c].second = a[s[c].first];
		currS += a[s[c].first];

	}
	cout << c << endl;
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
