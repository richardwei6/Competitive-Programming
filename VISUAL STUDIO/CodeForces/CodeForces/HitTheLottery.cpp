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
//unordered_map<int, int> dp;
void solve() {
	int denom[5] = { 1,5,10,20,100 };
	int j;
	cin >> j;
	int n = j % 100;
	int dp[101] {}; // minimum number of bills at i dollars
	for (int i = 1; i <= n; i++) { //for each number from 1 - n
		int mn = INT_MAX;
		for (int j : denom) { // for each denomination
			if (i >= j) { // if i-j >= 0
				mn = min(mn, dp[i - j]); // minimum denomination count for previous count
			}
		}
		dp[i] = mn+1; // current denomination
	}
		cout << dp[n] + j/100 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
