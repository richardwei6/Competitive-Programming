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

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	if (n / k >= m) {
		cout << m << endl;
	}
	else {
		m -= (n / k);
		int t = n / k, i = 0; // max
		V<int> a(k - 1, 0);
		while (m) {
			a[i]++;
			m--;
			i = i + 1 < k-1 ?i+1:0;
		}
		int mx = 0;
		for (int i : a) {
			mx = max(mx, i);
		}
		cout << t - mx << endl;
	}
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
