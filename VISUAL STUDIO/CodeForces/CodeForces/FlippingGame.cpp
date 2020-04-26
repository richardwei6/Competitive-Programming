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


int numOneFlip(vector<int> a, int i, int j) {

	for (int b = i; b <= j; b++) {
		a[b] = 1 - a[b];
	}

	int n = 0;
	for (int c : a) {
		if (c == 1) {
			n++;
		}
	}
	return n;
}

void solve() {
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n;  i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	int maxOne = 0;
	// brute force ways to put flip digits
	for (int i = 0; i < a.size(); i++) { // starting
		for (int j = i; j < a.size(); j++) { // ending
			maxOne = max(maxOne, numOneFlip(a, i, j));
		}
	}
	cout << maxOne << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
