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

int diff(multiset<int> a, multiset<int> b) { // b is less elements
	vector<int> x(begin(a), end(a)), y(begin(b), end(b));
	for (int i = 0; i < y.size(); i++) {
		if (x[i] != y[i]) {
			return x[i];
		}
	}
	return x[size(x)-1]; // last element
}

void solve() {
	int size;
	multiset<int> a;
	cin >> size;
	int o[2];
	for (int i = 0; i < size; i++) {
		int n;
		cin >> n;
		a.insert(n);
	}
	for (int t = 0; t < 2; t++) { // next two lines
		multiset<int> c; // current
		--size;
		for (int i = 0; i < size; i++) {
			int n;
			cin >> n;
			c.insert(n);
		}
		o[t] = diff(a, c);
		a = c;
	}
	cout << o[0] << endl;
	cout << o[1] << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
}


/**/
