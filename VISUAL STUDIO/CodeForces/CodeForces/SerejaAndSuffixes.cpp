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

void solve() {
	int n, m;
	cin >> n >> m;
	int dp[100002], a[100002]; 
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	// calculate dp - pos is the num of distinct integers there after a[i] (but including a[i])
	set<int> d;
	for (int i = n; i > 0; i--) {
		d.insert(a[i]);
		dp[i] = d.size();
	}

	while (m--) {// from a[l] to a[n], l < n, how many distinct integers are there?
		int l;
		cin >> l;
		cout << dp[l] << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
