
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


int dp[100001]{}; // num of smaller numbers than i
void solve() {
	ll n, q;
	cin >> n;
	map<ll,ll> p;
	for (int i = 0; i < n; i++) {
		ll j;
		cin >> j;
		p[j]++;
	}
//	vector<ll> p(begin(u), end(u));
	auto m = p.begin();
	for (ll i = 1; i <= (--p.end())->first; i++) { // from one to the biggest num in vector
		dp[i] = dp[i - 1];
		if (m!=end(p) && m->first == i) {
			dp[i] += m->second;
			m++;
		}
	}
	cin >> q;
	for (int m = 0; m < q; m++) {
		ll i;
		cin >> i;
		if (i > (--p.end())->first) {
			cout << dp[(--p.end())->first] << endl;
		}
		else {
			cout << dp[i] << endl;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
