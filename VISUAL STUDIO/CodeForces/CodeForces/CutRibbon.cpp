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
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int dp[4001]{}; // length i is max num of cuts to get to value
	dp[0] = 0;
	for (int i = 1 ; i <= n; i++){ // for each length i
		int x = -1, y = -1, z = -1;
		if (i >= a) { // cuts with length a are possible
			x = dp[i - a]; //l-a
		}
		if (i >= b) { // cuts with length b are possible
			y = dp[i - b];
		}
		if (i >= c) { // cuts with lenth c are possible
			z = dp[i - c];
		}
		if (x == -1 && y == -1 && z == -1) { // no possible way to cut up length
			dp[i] = -1;
		}
		else { // possibly
			dp[i] = max(max(x, y), z) + 1; // takes the max dp value of x,y,z, (meaning the max number of cuts before with only length x, y, or z) and adds 1 which is the next cut you make
		}
	}
	cout << dp[n] << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
