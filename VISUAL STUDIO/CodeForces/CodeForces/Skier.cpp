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
	string s;
	cin >> s;
	map<pair<pair<ll, ll>, pair<ll,ll>>, int> p; // passed edges between two points
	ll c =0;
	pair<ll, ll> prev;
	for (char i : s) {
		pair<ll, ll> curr = prev;
		if (i == 'N') {
			curr.second++;
		}
		else if (i == 'S') {
			curr.second--;
		}
		else if (i == 'W') {
			curr.first--;
		}
		else {
			curr.first++;
		}
		pair<pair<ll,ll>, pair<ll,ll>> r = { prev, curr };
		if (p[r] != 0) {
			c++;
		}
		else {
			c += 5;
		}
		p[r] = 1;
		r = { curr,prev };
		p[r] = 1;
		prev = curr;
	}
	cout << c << endl;
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
