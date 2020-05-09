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
	int n;
	cin >> n;
	deque<int> a;
	for (; n--;) {
		int j;
		cin >> j;
		a.PS(j);
	}
	int c = a.front(), x = c, y= 0;
	a.pop_front();
	int t = 1;
	while (a.size()) {
		if (t % 2 == 0) { // alice
			int s = 0;
			while (s <= c && a.size()) {
				s += a.front();
				a.pop_front();
			}
			c = s;
			x += s;
		}
		else { // bob
			int s = 0;
			while (s <= c  && a.size()) {
				s += a.back();
				a.pop_back();
			}
			c = s;
			y += s;
		}
		t++;
	}
	cout << t << " " << x << " " << y << endl;
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
