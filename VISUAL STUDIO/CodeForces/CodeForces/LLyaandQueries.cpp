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
	string s;
	cin >> s;
	int n;
	cin >> n;
	int dp[100000]{};
	for (int i = 1; i < s.size(); i++) {
		if (s[i - 1] == s[i]) {
			dp[i] = 1;
		}
	}
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (dp[i] == 1) {
			sum++;
		}
		dp[i] = sum;
	}

	while (n--) {
		int l, r;
		cin >> l >> r;
		cout << dp[r-1] - dp[l-1] << endl;
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
