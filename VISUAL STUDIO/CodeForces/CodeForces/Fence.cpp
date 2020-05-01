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
	int n, k;
	cin >> n >> k;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		a.push_back(j);
	}
	// sliding window technique
	int s = 0;
	for (int i = 0; i < k; i++) {
		s += a[i];
	}// inital sum
	int mn = s, p = 0; // min sum and pos
	for (int i = 1; i+k-1 < a.size(); i++) { // new int - starting pos
		s -= a[i-1]; // remove first element
		s += a[i+k-1]; // add new element
		if (s < mn) {
			mn = s;
			p = i;
		}
	}
	cout << p +1 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
