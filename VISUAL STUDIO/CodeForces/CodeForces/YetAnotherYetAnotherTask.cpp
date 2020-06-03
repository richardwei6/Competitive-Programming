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
#define inf 10000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define what_is(x) cerr << #x << " is " << x << endl;
#define PS(x) push_back(x)

void solve() {
	ll n;
	cin >> n;
	V<int> a(n);
	for (int& i : a) {
		cin >> i;
	}
	ll ans = 0;
	for (int mx = 0; mx < 31; mx++) { // kadane's alg with removing the numbers bigger than mx
		ll cur = 0, best = 0;
		for (int i = 0; i < n; i++) {
			int v = (a[i] > mx ? -1e9 : a[i]);
			cur += v;
			best = min(best, cur);
			ans = max(ans, (cur - best) - mx);
		}
	}
	cout << ans << endl;
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
