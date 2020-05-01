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
	ll n;
	cin >> n;
	ll dp[100001]{};
	unordered_map<ll, ll> h; // freq of numbers appearing
	for (ll i = 0; i < n; i++) {
		ll j;
		cin >> j;
		h[j]++;
	}
	dp[0] = 0;
	dp[1] = h[1];
	for (ll i = 2; i <= 100000; i++) { // for each number you can either pick it or not pick it entirely. 
		dp[i] = max(
		dp[i - 1], // Not picking the ith number, then the number before it can be considered
		dp[i - 2] + i*h[i] // Picking the ith number, then the number before it is eliminated, hence the number before that is considered
		);	
	}
	cout << dp[100000] << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
