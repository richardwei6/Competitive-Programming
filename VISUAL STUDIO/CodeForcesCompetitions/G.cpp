

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
	int n;
	cin >> n;
	vector<int> a;
	while (  n-- > 1 ) {
		a.PS(n);
	}
	if (a.size() < 3) {
		cout << -1 << endl;
		return;
	}
	for (int i = 0; i+1 < a.size(); i++) {
		if (i % 3 != 0) {
			swap(a[i], a[i + 1]);
			i = i + 2;
		}
	}
	for (int i = 1; i+2< a.size(); i++) {
		if (abs(a[i] - a[i - 1]) == 1) {
			swap(a[i+2], a[i +1]);
		}
	}

	for (int i : a) {
		cout << i << " ";
	}
	cout << endl;
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
