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

using namespace std;

#pragma GCC optimize("Ofast")
#define ll long long
#define V vector

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> m; // mountain
	while (n--) {
		int t;
		cin >> t;
		m.push_back(t);
	}

	int maxPeak = 0;
	int maxPos = 0;
	for (int i = 1; i < k-1; i++) { // calculate inital peaks
		if (m[i - 1] < m[i] && m[i + 1] < m[i]) {
			maxPeak++;
		}
	}
	int prev = maxPeak; // start of counting peaks
	for (int i = 2; i + k -2  < m.size(); i++) { // start = i - remove start and add i+k
		int c = prev;
		if (m[i - 1] < m[i] && m[i + 1] < m[i]) {// beginning
			c--;
		}
		int n = i + k-3;
	//	cout << "beginning - " << m[i] << " : end - " << m[i+k-3] << endl;
		if (m[n-1] < m[n] && m[n+1] < m[n]) {// ending peak
			c++;
		}
		if (c > maxPeak) {
			maxPeak = c;
			maxPos = i-1;
		}
		prev = c;
	}


	cout <<"ans - " << maxPeak + 1 << " " << maxPos+1 << endl;
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


/**/
