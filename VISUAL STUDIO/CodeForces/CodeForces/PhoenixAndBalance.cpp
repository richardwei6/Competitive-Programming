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
	ll s = pow(2, n);
	for (ll i = pow(2, n-1), c = 2; i >= 2; i /= 2, c++) {
		if (c <= (n / 2) +1) {
			s -= i;
		}
		else {
			s += i;
		}
	}
	cout << s << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (;t--;)
		solve();
	return 0;
}


/**/
