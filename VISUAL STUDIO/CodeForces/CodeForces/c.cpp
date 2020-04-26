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
#include <memory>
#include <stack>
#include <iterator>
#include <queue>

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector

void solve() {
	int a, b, q;
	cin >> a >> b >> q;
	vector<int> ans(q, 0);
	for (int i = 0; i < q; i++) {
		int l, r, n = 0;
		cin >> l >> r;
		for (int x = l; x <= r; x++) {
			if ( ((x % a) % b) != ((x % b) % a) ){
				ans[i]++;
			}	
		}
	}
	for (int i : ans) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (; t--;) {
		solve();
	}
	return 0;
}
*/

/**/
