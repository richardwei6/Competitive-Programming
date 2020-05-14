
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
	int s[8001]{}, c = 0, n, a[8000]{}, dp[8001]{};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	s[1] = a[0];
	for (int i = 2; i < n+1; i++) {
		s[i] = s[i - 1] + a[i-1];
	}
	// calculate all possible special elements

	for (int u = 2; u < n + 1; u++) {
		for (int l = u - 2; l > -1; l--) { // lower bound
			if (s[u]-s[l] <= 8000)
				dp[s[u] - s[l]] = 1;
		}
	}

	for (int i = 0; i < n; i++) { // for each element
		if (dp[a[i]]) {
			c++;
		}
	}
	cout << c << endl;
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
