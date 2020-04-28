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
	int n;
	cin >> n;
	vector<ll> a;
	while (n--) {
		int m;
		cin >> m;
		a.push_back(m);
	}

	int dp[100001]{1};
	for (int i = 1; i < a.size(); i++) {
		if (a[i] >= a[i - 1]) {
			dp[i] = dp[i - 1] + 1;
		}
		else {
			dp[i] = 1;
		}
	}
	int m = 0;
	for (int i = 0; i < a.size(); i++) {
		m = max(m, dp[i]);
	}
	cout << m << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
