

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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector

int F(int n) {
	for (int k = 2; ;k++){
		for (int x = 1; n >= (k / 2) * (x + pow(2, k - 1) * x); x++) {
			if (n == (k/2)*(x + pow(2, k - 1)*x)) {
				return x;
			}
		}
	}
}


void solve() {
	int n; // number of candy wrappers
	cin >> n;
//	cout << "data gotten - " << n << endl;
	cout <<"ans - " << F(n) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		 solve();
	}
	return 0;
}


/**/
