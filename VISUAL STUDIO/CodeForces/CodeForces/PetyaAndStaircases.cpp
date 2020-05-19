
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
#define IT(x) begin(x),end(x)
#define mod 1000000007

void solve() {
	int n, m;
	cin >> n >> m;
	multiset<int> a;
	while (m--) {
		int j;
		cin >> j;
		a.insert(j);
	}
	V<int> t(IT(a));
	int c = 0;
	if (t.size() != 0 && (t[0] == 1 || t[t.size() - 1] == n)) {
		cout << "NO" << endl;
		return;
	}
	for (int i = 1; i < t.size(); i++) {
		if (t[i] - t[i - 1] == 1) {
			c++;
		}
		else {
			c = 0;
		}
		if (c == 2) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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
