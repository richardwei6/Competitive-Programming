
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

int dp[1000005]{};

void solve() {
	string p;
	cin >> p;
	int n;
	dp[0] = n = -1;
	for (int i = 1; i < p.size(); i++) {
		while (n != -1 && p[i] != p[n + 1]) {
			n = dp[n];
		}
		if (p[i] == p[n + 1]) {
			dp[i] = ++n;
		}
		else {
			dp[i] = -1;
		}
	}
	int m = dp[p.size() - 1];
	int f = dp[m];
	if (m == -1) {
		f = -1;
	}

	for (int i = 1; i < p.size() - 1; i++) {
		if (dp[i] == m) {
			f = m;
		}
	}

	if (f == -1) {
		cout << "Just a legend" << endl;
		return;
	}
	cout << p.substr(0, f + 1) << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	int t; 
//	cin >> t;
	//while (t--)
		solve();
	return 0;
}


/**/
